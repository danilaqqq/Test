#include<windows.h>
#include <cstdio>
#include<iostream>
#include "load.h"

typedef void (*Func_t)(void);

void LoadRun(const char * const s)
{
	HINSTANCE lib;
	lib = LoadLibrary(s);
	if(!lib)
	{
		std::cout<<"cannot load library"<<std::endl;
		return;
	}
	Func_t pFunc = reinterpret_cast<Func_t>(GetProcAddress((HINSTANCE) lib, "Func"));
	if(pFunc == nullptr)
	{
		std::cout<<"cannot load function"<<std::endl;
	}
	else pFunc();
	
	FreeLibrary((HINSTANCE) lib);
}