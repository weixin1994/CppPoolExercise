#include <iostream>
#include <fstream>
#include <string>

int main(int argc,char *argv[])
{
	if(argc == 1)
		std::cout << "my_cat: Usage : ./my_cat file [...]" << std::endl;
	else
	{
		for(int i = 1;i < argc;i++)
		{
			std::ifstream infile; 
			std::string temp = argv[i];
			infile.open(temp.data());
			if(infile.is_open()) 
			{
				char c;
				infile >> std::noskipws;
				while (!infile.eof())
				{
					infile >> c;
					std::cout << c;
				}
				infile.close();
				std::cout << std::endl;
			}
			else
				std::cout << "my_cat:" << temp << ":No such file or directory" << std::endl;
		}	
	}
    return 0;
}
