#include <iostream>

using namespace std;

template<typename T1, typename T2>
auto sum(T1 x, T2 y) ->decltype(x+y) 
{
	return x + y;
}

int main() {

	int x = 5;
	float z = 2.3f;
	
	cout << sum(x, z) << endl;

	return 0;
}