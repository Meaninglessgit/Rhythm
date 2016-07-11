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
#define SQUARE_SIZE   12


void eraseAll()
{
	fflush(stdout);
	system("cls");
	Sleep(200);
	fflush(stdout);

}

/*
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
*/

void Gotoxy(int x, int y)
{
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);

}


void textcolor(int color_number)
{

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);

}

void drawSqureSub(int x, int y)
{
	
 textcolor(153);
 Gotoxy(x,y);

 for(int i=y;i<SQUARE_SIZE+y;i++)
 {
  for(int j=x;j<SQUARE_SIZE*2+x;j++)
  {
   Gotoxy(j,i);
   printf("%c",'k');
  }
  
 }
 textcolor(7);
 
 
}
/*
void drawSqure(int x,int y)
{
 drawSqureSub((SQUARE_SIZE*x*2)+1,(SQUARE_SIZE*y)+1); 
}
*/

int setSystem()
{
 system("title RhythmGame");
 //system("color f0");
 system("mode con:cols=120 lines=40");
 return 0;
}



void rhythmGame()
{
	
	clock_t start;
	
	int i,j,k,l;
	int number;
	int success = 0;
	int ubeat[3][3] = {0};
	int temp;

	srand((unsigned int)time(NULL));
	
	while(1)
	{
		temp = rand() % 9;
		i = temp/3 ;
		j = temp%3;
		ubeat[i][j] = 1; //0이나 1의 값을 넣어준다
	/*	
	for(i=0; i<3; i++)
	{
		for(j =0; j<3; j++)
		{
			ubeat[i][j] = rand() %2; //0이나 1의 값을 넣어준다
			if(ubeat[i][j] == 1)
			{
				break;//만약 1이면 for문 탈출
			}
		}

		if(ubeat[i][j] == 1)
		{
			break; //만약 1이면 for문 탈출
		}
	}*/



	for(k=0; k<3; k++)
	{
		for(l=0; l<3; l++)
		{
			printf("%3d", ubeat[k][l]);
		}
		printf("\n");
	}
	
	
	//Sleep(2000);
	start = clock();
	while(clock() - start <= 700 )
	{
		number = 3*(2-i)+1+j;
		
		switch(number)
		{
		
			case 1: if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
					success = 1;
					
					break;
			case 2: if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
					success = 1;
					
					break;
			case 3: if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
					success = 1;
				
					break;
			case 4: if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
					success = 1;
					
					break;
			case 5: if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
					success = 1;
					
					break;
			case 6: if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
					success = 1;
				
					break;
			case 7: if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
					success = 1;
					
					break;
			case 8: if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
					success = 1;
					
					break;
			case 9: if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
					success = 1;
					
					break;
		}
		if(success == 1)
		{
			break;
		}
		else if(success == -1)
		{
			break;
		}
		else if (success == 0)
		{

		}
		else
		{

		}
					

	}
	if(success == 1)
		printf("success");
	else
		printf("fail");
		
	Sleep(rand()% 1000 + 300);
	eraseAll();

	for(i=0; i<3; i++)
	{
		for(j =0; j<3; j++)
		{
			ubeat[i][j] = 0; //0이나 1의 값을 넣어준다
			
		}
	}

	success = 0;

	}
			
	/*
	while (clock() - start <= 500)
	{
					for (int i = 1; i <= 32; i++)
					{
						Gotoxy(i, 60);
						printf("①");
						Sleep(30);
						Gotoxy(i, 60);
						printf(" ");
						
					}
	}*/

}

void animation(int x, int y)
{
	int i,j;

	for(int i=y;i<SQUARE_SIZE+y;i++)
	{
		textcolor(204);
		Gotoxy(x,i);
	    printf("%c",'k');
	}

		for(int j=x;j<SQUARE_SIZE*2+x;j++)
		{
			textcolor(204);
			Gotoxy(j,y);
			printf("%c",'k');
		}
	


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

	

	//rhythmGame();
	
	return 0;
}