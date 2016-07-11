#include <stdio.h>   /* required for file operations */
#include <windows.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <conio.h>
#include <time.h>

#pragma comment(lib, "winmm.lib")

#define COMMAND_SIZE 256
#define LEFT   75      // 좌측방향키
#define RIGHT  77      // 우측방향키
#define UP     72      // 위쪽방향키
#define DOWN   80      // 아래방향키

#define SIZE 900
#define SQUARE_SIZE 300

void eraseAll()
{
	fflush(stdout);
	system("cls");
	Sleep(200);
	fflush(stdout);

}



void Gotoxy(int x, int y)
{
	COORD Pos = { y - 1,x - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}


void textcolor(int color_number)
{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);

}


/*void rythmnGame()
{
	clock_t start;
	
	start = clock();

	while (clock() - start <= 500)
	{
					for (int i = 1; i <= 32; i++)
					{
						Gotoxy(i, 60);
						printf("①");
						Sleep(30);
						Gotoxy(i, 60);
						printf(" ");
						if (_kbhit() == 1)
						{
							
						}
						else
						{
							reflexSucess = 0;
						}
					}

}*/

int drawSqure(x,y)
{
	Gotoxy(x,y);
    int i,j;
    unsigned char a = 0xa6;

    /************* 맨 윗단 그리기*********************/
    printf("%c%c",a,0xa3);
    for(i=0;i<x-2;i++)printf("%c%c",a,0xa1);
    printf("%c%c\n",a,0xa4);

    /************* 중간 그리가************************/
    for(j=0;j<y-2;j++){
        printf("%c%c",a,0xa2);
        for(i=0;i<x-2;i++)printf("  ");
        printf("%c%c",a,0xa2);
        printf("\n");
    }
    /************* 맨 밑단 그리기*********************/
    printf("%c%c",a,0xa6);
    for(i=0;i<x-2;i++)printf("%c%c",a,0xa1);
    printf("%c%c\n",a,0xa5);

	}
}


int setSystem()
{
	system("title RhythmGame");
	//system("color f0");
	system("mode con:cols=129 lines=47");
	return 0;
}

int main(int argc, char* argv[])
{
	setSystem();

}

