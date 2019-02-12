#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"

const int MIN_PER_HR = 60;
bool newcustomer(double x);

int main() {
	using std::cout;
	using std::cin;
	using std::endl;
	using std::ios_base;

	std::srand(std::time(0));

	cout << "Case Study: Bank of Heather Automatic Teller\n";
	cout << "Enter the number of simulation hours: ";
	int hours;              //  hours of simulation 
	cin >> hours;
	double perhour = 60;	//  forcing 60 customers per hour ensures wait of > 1 min
	double min_per_cust;
	Item temp;              //  new customer data 
	long turnaways;     //  turned away by full queue 
	long customers;     //  joined the queue 
	long served;        //  served during the simulation 
	long sum_line;      //  cumulative line length 
	int wait_time;		//  time until autoteller is free 
	long line_wait;     //  cumulative time in line

	do
	{
		Queue line(hours * perhour);   // set queue size to # of cust (none turned away)
									   // as a starting point. perhour must be at least 
									   // this much
		perhour = perhour--;
		min_per_cust = MIN_PER_HR / perhour;
		turnaways = 0;     //  set all values to zero
		customers = 0;
		served = 0;
		sum_line = 0;
		wait_time = 0;
		line_wait = 0;

		// running the simulation 
		for (int cycle = 0; cycle < perhour; cycle++)
		{
			if (newcustomer(min_per_cust))  // have newcomer 
			{
				if (line.isFull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);    // cycle = time of arrival 
					line.enqueue(temp); // add newcomer to line 
				}
			}
			if (wait_time <= 0 && !line.isEmpty())
			{
				line.dequeue(temp);      // attend next customer 
				wait_time = temp.ptime(); // for wait_time minutes 
				line_wait += cycle - temp.when();
				served++;
			}
			if (wait_time > 0)
				wait_time--;
			sum_line += line.queuecount();
		}
	} while (double(line_wait) / served > 1.0); // keep decrementing perhour until falls
									  // below average wait time of 1 min


	if (customers > 0)
	{
		cout << "customers accepted: " << customers << endl;
		cout << "  customers served: " << served << endl;
		cout << "         turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / perhour << endl;
		cout << " average wait time: " << (double)line_wait / served << " minutes\n";
	}
	else
		cout << "No customers!\n";
	cout << "\nThe average weight time is " << (double)line_wait / served << " minutes\n";
	cout << "when there are " << perhour << " customers per hour." << std::endl;



	/*cout << "Studium przypadku: bankomat Banku Stu Kas\n";
	cout << "Podaj maksymalna dlugosc kolejki: ";
	int qs;
	cin >> qs;
	Queue line(qs);

	cout << "Podaj symulowany czas (w godzinach): ";
	int hours;
	cin >> hours;

	long cyclelimit = MIN_PER_HR * hours;

	cout << "Podaj srednia liczbe klientow na godzine: ";
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;

	Item temp;
	long turnaways = 0;
	long customers = 0;
	long served = 0;
	long sum_line = 0;
	int wait_time = 0;
	long line_wait = 0;

	for (int cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_cust))
		{
			if (line.isFull())
				turnaways++;
			else {
				customers++;
				temp.set(cycle);
				line.enqueue(temp);
			}
		}
		if (wait_time <= 0 && !line.isEmpty())
		{
			line.dequeue(temp);
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();
			served++;
		}
		if (wait_time > 0)
			wait_time--;
		sum_line += line.queuecount();
	}

	if (customers > 0)
	{
		cout << " liczba klientow przyjetych: " << customers << endl;
		cout << " liczba klientow obsluzonych: " << served << endl;
		cout << " liczba klientow odeslanych: " << turnaways << endl;
		cout << " srednia dlugosc kolejki: ";
		cout.precision(2);
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout.setf(ios_base::showpoint);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " sredni czas oczekiwania: "
			<< (double)line_wait / served << " minut\n";
	}
	else
		cout << "Brak klientow!\n";

	cout << "Gotowe!\n";
*/
	return 0;
}

bool newcustomer(double x) {
	return (std::rand()*x / RAND_MAX < 1);
}