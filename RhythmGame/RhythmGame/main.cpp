#include "common.h"

#pragma comment(lib, "winmm.lib")


int setSystem()
{
 system("title RhythmGame");
 //system("color f0");
 system("mode con:cols=120 lines=40");
 return 0;
}


int main()
{
	setSystem();
	
	menu();

	return 0;
}