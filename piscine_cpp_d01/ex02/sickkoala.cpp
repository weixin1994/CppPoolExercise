#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class SickKoala
{
	public:
		SickKoala(string name);
		~SickKoala();
		void poke();
		bool takeDrug(string str);
		void overDrive(string str);
	private:
		string name;
};

SickKoala::SickKoala(string namee)
{
	name = namee;
}

SickKoala::~SickKoala(void)
{
	cout << "Mr." << name << ": Kreooogg !! Je suis gueriiii !" << endl;
}

void SickKoala::poke(void)
{
	cout << "Mr." << name << ": Gooeeeeerrk !! :’(" << endl;
}

bool SickKoala::takeDrug(string str)
{
	string str_des1 = "mars";
	string str_des2 = "Buronzand";
	
	if(strcasecmp(str.c_str(), str_des1.c_str()) == 0)
	{
		cout << "Mr." << name << ": Mars, et ca kreog !" << endl;
		return true;
	}
	else if(str.compare(str_des2) == 0)
	{
		cout << "Mr." << name << ": Et la fatigue a fait son temps !" << endl;
		return true;
	}
	else
	{
		cout << "Mr." << name << ": Goerkreog !" << endl;
		return false;
	}
}

void SickKoala::overDrive(string str)
{
	string str_rep = "1337";
	string str_des = "Kreog";
	int pos = 0;
	string::size_type idx;
	idx=str.find(str_des);
	if(idx != string::npos)
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
	cout << str << endl;
}

int main()
{
	string str_test = "qwsdKreogfd";
	SickKoala sickKoala("SickKoala");
	sickKoala.overDrive(str_test);
	sickKoala.poke();
	sickKoala.takeDrug("BuRonzand");
	return 0;
}
