#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float num;
	float result;
	string typ;
	cin >> num >> typ;
	if(typ == "Fahrenheit")
	{
		float temp = num - 32;
		result = 5.0 / 9.0 * temp;
		cout << setiosflags(ios::right) << setw(16) << setprecision(3) << std::fixed << result << setiosflags(ios::right) << setw(16) << "Celsius" << endl;
	}
	if(typ == "Celsius")
	{
		float temp2 = 5.0 / 9.0;
		result = num / temp2 + 32;
		cout << setiosflags(ios::right) << setw(16) << setprecision(3) << std::fixed << result << setiosflags(ios::right) << setw(16) << "Fahrenheit" << endl;
	}
	return 0;
}
