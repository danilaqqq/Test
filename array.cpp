#include <iostream>
//#include "func.h"

extern "C" void Func(void);

void Func(void)
{
	int N = 57, i, k = 0;
	int array[N];
	
	for(i = 0; i < N; i++) array[i] = rand()%101-50;
	
	for(i = 0; i < N; i++)
		if(array[i] % 3 == 0) k++;
		
	for(i = 0; i < N; i++)
		std::cout<<array[i]<<"\t";
		
	std::cout<<std::endl<<"Array: "<<k<<std::endl;
}