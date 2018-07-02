#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc,char *argv[])
{
	if(argc == 1)
		cout << "my_cat: Usage : ./my_cat file [...]" << endl;
	else
	{
		for(int i = 1;i < argc;i++)
		{
			ifstream infile; 
			string temp = argv[i];
			infile.open(temp.data());
			if(infile.is_open()) 
			{
				char c;
				infile >> noskipws;
				while (!infile.eof())
				{
					infile >> c;
					cout << c;
				}
				infile.close();
				cout << endl;
			}
			else
				cout << "my_cat:" << temp << ":No such file or directory" << endl;
		}	
	}
	
    return 0;
}
