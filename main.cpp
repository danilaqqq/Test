#include <iostream>
#include "load.h"
//linux branch

int main() 
{
	#ifndef_WIN32
		return -1;
	#endif
	int menu = 0;
	std::cout<<"Menu"<<std::endl;
	while(menu != 3)
	{
		std::cout<<"1. Array"<<std::endl;
		std::cout<<"2. Matrix"<<std::endl;
		std::cout<<"3. Exit"<<std::endl;
		std::cin>>menu;
		switch(menu)
		{
			case 1: LoadRun("arrlib.dll");
					break;
					
			case 2: LoadRun("matlib.dll");
					break;
		}
	}
	return 0;
}