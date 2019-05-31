#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the farenheit value (just the value)" << endl;
	float f;
	cin >> f;
	float c;
	c = (f-32) * 5.0;
	c = c/9.0;
	cout << c << endl;
	return 0;
}