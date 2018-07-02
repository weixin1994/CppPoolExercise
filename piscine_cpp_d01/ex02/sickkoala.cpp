#include <iostream>
#include <string>
#include <string.h>
#include "sickkoala.h"

SickKoala::SickKoala(std::string namee)
{
	name = namee;
}

SickKoala::~SickKoala(void)
{
	std::cout << "Mr." << name << ": Kreooogg !! Je suis gueriiii !" << std::endl;
}

void SickKoala::poke(void)
{
	std::cout << "Mr." << name << ": Gooeeeeerrk !! :’(" << std::endl;
}

bool SickKoala::takeDrug(std::string str)
{
	std::string str_des1 = "mars";
	std::string str_des2 = "Buronzand";
	
	if(strcasecmp(str.c_str(), str_des1.c_str()) == 0)
	{
		std::cout << "Mr." << name << ": Mars, et ca kreog !" << std::endl;
		return true;
	}
	else if(str.compare(str_des2) == 0)
	{
		std::cout << "Mr." << name << ": Et la fatigue a fait son temps !" << std::endl;
		return true;
	}
	else
	{
		std::cout << "Mr." << name << ": Goerkreog !" << std::endl;
		return false;
	}
}

void SickKoala::overDrive(std::string str)
{
	std::string str_rep = "1337";
	std::string str_des = "Kreog";
	int pos = 0;
	std::string::size_type idx;
	idx=str.find(str_des);
	if(idx != std::string::npos)
	{
		for(int i = 0;i < str.length();i++)
		{
			if(str[i] == 'K' && str[i+1] == 'r' && str[i+2] == 'e' && str[i+3] == 'o' && str[i+4] == 'g')
			{
				pos = i;
				break;
			}
		}
		str = str.replace(pos,5,str_rep);
	}
	std::cout << str << std::endl;
}

int main()
{
	std::string str_test = "qwsdKreogfd";
	SickKoala sickKoala("SickKoala");
	sickKoala.overDrive(str_test);
	sickKoala.poke();
	sickKoala.takeDrug("BuRonzand");
	return 0;
}
