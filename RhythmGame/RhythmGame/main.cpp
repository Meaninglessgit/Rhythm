#include "common.h"


int setSystem()
{
 system("title RhythmGame");
 //system("color f0");
 system("mode con:cols=120 lines=40");
 return 0;
}




int main(int argc, char* argv[])
{
	setSystem();

	drawSqureSub(1,1);
	drawSqureSub(1,15);
	drawSqureSub(1,29);
	drawSqureSub(30,1);
	drawSqureSub(30, 15);
	drawSqureSub(30, 29);
	drawSqureSub(59,1);
	drawSqureSub(59, 15);
	drawSqureSub(59, 29);

	

	rhythmGame();
	return 0;
}