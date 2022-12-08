#include <iostream>
//#include "func.h"

extern "C" void Func(void);

void Func(void)
{
	int W = 9, H = 5, k = 0, i, j;
	int matrix[H][W];
	
	for(i = 0; i < H; i++)
		for(j = 0; j < W; j++)
			matrix[i][j] = rand()%101-50;
			
	for(i = 0; i < H; i++)
		for(j = 0; j < W; j++)
			if(matrix[i][j] % 3 == 0) k++;
			
	for(i = 0; i < H; i++)
	{
		for(j = 0; j < W; j++)
			std::cout<<matrix[i][j]<<"\t";
		std::cout<<std::endl;
	}
			
	std::cout<<"Matrix: "<<k<<std::endl;
}