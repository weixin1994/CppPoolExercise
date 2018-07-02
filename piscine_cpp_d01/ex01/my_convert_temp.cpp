#include <iostream>
#include <iomanip>

int main()
{
	float num;
	float result;
	std::string typ;
	std::cin >> num >> typ;
	if(typ == "Fahrenheit")
	{
		float temp = num - 32;
		result = 5.0 / 9.0 * temp;
		std::cout << std::setiosflags(std::ios::right) << std::setw(16) << std::setprecision(3) << std::fixed << result << std::setiosflags(std::ios::right) << std::setw(16) << "Celsius" << std::endl;
	}
	if(typ == "Celsius")
	{
		float temp2 = 5.0 / 9.0;
		result = num / temp2 + 32;
		std::cout << std::setiosflags(std::ios::right) << std::setw(16) << std::setprecision(3) << std::fixed << result << std::setiosflags(std::ios::right) << std::setw(16) << "Fahrenheit" << std::endl;
	}
	return 0;
}
