// Celsius to Fahrenheit
#include <iostream>

using namespace std;

Convert(int C)
{
	cout << "Temperature in fahrenheit is: " << (C * 9/5) + 32;
}

int main()
{
	int C;
	cout << "Please enter temperature in Fahrenheit: ";
	cin >> C;
	Convert(C);
}
