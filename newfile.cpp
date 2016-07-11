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

struct student{
	
	void vsasg();
};

void eraseAll()
{
	fflush(stdout);
	system("cls");
	Sleep(200);
	fflush(stdout);

}


void box()
{
	void Gotoxy(int x, int y);
	int i,j;

	for (i = 32; i <= 46; i++)
	{
		Gotoxy(i, 20);
		printf("│");

	}
	Gotoxy(47, 20);
	printf("└");

	for (j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┘");
	printf("         ");
	printf("└");
	for (j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┘");
	printf("         ");
	printf("└");
	for (j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┘");//bottom ─

	Gotoxy(31, 20);
	printf("┌");
	for (j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┐");
	printf("         ");
	printf("┌");
	for (j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┐");
	printf("         ");
	printf("┌");
	for (j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┐");//top─

	for (i = 32; i <= 46; i++)
	{
		Gotoxy(i, 42);
		printf("│");

	}

	for (i = 32; i <= 46; i++)
	{
		Gotoxy(i, 53);
		printf("│");

	}

	for (i = 32; i <= 46; i++)
	{
		Gotoxy(i, 75);
		printf("│");

	}

	for (i = 32; i <= 46; i++)
	{
		Gotoxy(i, 86);
		printf("│");

	}


	for (i = 32; i <= 46; i++)
	{
		Gotoxy(i, 108);
		printf("│");

	}//bottom deck!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


	for (i = 2; i <= 16; i++)
	{
		Gotoxy(i, 20);
		printf("│");

	}
	Gotoxy(17, 20);
	printf("└");

	for (j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┘");
	printf("         ");
	printf("└");
	for (j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┘");
	printf("         ");
	printf("└");
	for (j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┘");//bottom ─

	Gotoxy(1, 20);
	printf("┌");
	for (int j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┐");
	printf("         ");
	printf("┌");
	for (j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┐");
	printf("         ");
	printf("┌");
	for (j = 1; j <= 10; j++)
	{

		printf("─");

	}
	printf("┐");//top─

	for (i = 2; i <= 16; i++)
	{
		Gotoxy(i, 42);
		printf("│");

	}

	for (i = 2; i <= 16; i++)
	{
		Gotoxy(i, 53);
		printf("│");

	}

	for (i = 2; i <= 16; i++)
	{
		Gotoxy(i, 75);
		printf("│");

	}

	for (i = 2; i <= 16; i++)
	{
		Gotoxy(i, 86);
		printf("│");

	}


	for (i = 2; i <= 16; i++)
	{
		Gotoxy(i, 108);
		printf("│");

	}
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

int main(int argc, char* argv[])
{
	system("color f0");
	system("mode con:cols=129 lines=47");

	box();
	
}