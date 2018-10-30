#include <iostream>

struct travel_time{
  int hours;
  int mins;
};

const int MINS_PER_HR=60;

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{
  using std::cout;

  travel_time day1 = {5,45};
  travel_time day2 = {4,55};

  travel_time trip = sum(day1,day2);
  cout<<"Suma dwóch dni: ";
  show_time(trip);

  travel_time day3={4,32};
  cout<<"Suma trzech dni: ";
  show_time(sum(trip,day3));

  return 0;
}


travel_time sum(travel_time t1, travel_time t2)
{
  travel_time total;
  total.mins = (t1.mins+t2.mins)%MINS_PER_HR;
  int hrs_to_move = (t1.mins+t2.mins)/MINS_PER_HR;
  total.hours = t1.hours+t2.hours + hrs_to_move;

  return total;
}

void show_time(travel_time t){
  using std::cout;
  cout<<t.hours<<" godzin, "<<t.mins<<" minut\n";
}
