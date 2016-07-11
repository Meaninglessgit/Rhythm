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
void animation(int x, int y);

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




void rhythmGameMain()
{
	void rhythmGame1(int success, int number);
	void rhythmGame2(int success, int number, int number2, int i, int j);
	void rhythmGame3(int success, int number, int number2, int number3, int i, int j, int i2, int j2);

	//clock_t start;
	
	int i,j,k,l,i2 = 0,j2 = 0;
	int number1, number2= 0, number3 = 0;
	int success = 0;
	int ubeat[3][3] = {0};
	int temp;
	int multiplePress;
	int multNum;

	srand((unsigned int)time(NULL));
	
	while(1)
	{
		temp = rand() % 9;
		multiplePress = rand()% 10;

		i = temp/3 ;
		j = temp%3;
		ubeat[i][j] = 1; //0이나 1의 값을 넣어준다
		number1 = 3*i +1+j;

		if(multiplePress >=6 && multiplePress <= 7)
		{
			multNum = 2;
			while(1)
			{
				temp = rand() % 9;
				i = temp/3 ;
				j = temp%3;
				number2 = 3*i +1+j;
				if(number2!=number1)
					break;
			}
		}
		else if(multiplePress >=8 && multiplePress <= 9)
		{
			multNum = 3;
			while(1)
			{
				temp = rand() % 9;
				i = temp/3 ;
				j = temp%3;
				number2 = 3*i +1+j;
				temp = rand() % 9;
				i2 = temp/3 ;
				j2 = temp%3;
				number3 = 3*i2+1+j2;
				if(number2!=number1 && number2!=number3 && number1!=number3)
					break;
					
			}
		}
		else
		{
			multNum = 1;
		}

	//if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
	
	
	//Sleep(2000);
	//start = clock();
	
	if(multNum == 1)
	{
		rhythmGame1(success, number1);
	}
	else if(multNum == 2)
	{
		rhythmGame2(success, number1, number2, i,j);
	}
	else if (multNum == 3)
	{
		rhythmGame3(success, number1, number2, number3, i,j , i2, j2);
	}
	else
	{
	}
	
		Gotoxy(90,30);
		
	
		
	Sleep(rand()% 700 + 50);
	eraseAll();

	for(i=0; i<3; i++)
	{
		for(j =0; j<3; j++)
		{
			ubeat[i][j] = 0; //0이나 1의 값을 넣어준다
			
		}
	}

	success = 0;

	drawSqureSub(1,1);
	drawSqureSub(1,15);
	drawSqureSub(1,29);
	drawSqureSub(30,1);
	drawSqureSub(30, 15);
	drawSqureSub(30, 29);
	drawSqureSub(59,1);
	drawSqureSub(59, 15);
	drawSqureSub(59, 29);

	number2 =0;
	number3 =0;
	}
			
	
}

void rhythmGame1(int success, int number)
{
	clock_t start;
	start = clock();

	

	while(clock() - start <= 250 )
	{
		
		switch(number)
		{
		
			case 1: animation(1,29);
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
					success = 1;
					else
					success = -1;
					}
					break;

			case 2: animation(30,29);
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
					success = 1;
					else
					success = -1;
					}
					
					break;
			case 3: animation(59,29);
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
					success = 1;
					else
					success = -1;
					}
					break;
			case 4: animation(1,15);
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
					success = 1;
					else
					success = -1;
					}
					break;
			case 5: animation(30,15);
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
					success = 1;
					else
					success = -1;
					}
					break;
			case 6: animation(59,15);
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
					success = 1;
					else
					success = -1;
					}
					break;
			case 7: animation(1,1);
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
					success = 1;
					else
					success = -1;
					}
					break;
			case 8: animation(30,1);
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
					success = 1;
					else
					success = -1;
					}
					break;
			case 9: animation(59,1);
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
					success = 1;
					else
					success = -1;
					}
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

	while(clock() - start <= 550 )
	{
		if(success == 1)
		{
			break;
		}

				switch(number)
		{
		
			case 1: 
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
					success = 2;
					else
					success = -1;
					}
					break;

			case 2: 
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
					success = 2;
					else
					success = -1;
					}
					
					break;
			case 3:
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
					success = 2;
					else
					success = -1;
					}
					break;
			case 4: 
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
					success = 2;
					else
					success = -1;
					}
					break;
			case 5: 
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
					success = 2;
					else
					success = -1;
					}
					break;
			case 6: 
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
					success = 2;
					else
					success = -1;
					}
					break;
			case 7:
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
					success = 2;
					else
					success = -1;
					}
					break;
			case 8:
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
					success = 2;
					else
					success = -1;
					}
					break;
			case 9: 
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
					success = 2;
					else
					success = -1;
					}
					break;
		}
	}

	if(success == 1)
		printf("success");
	else if(success == 2)
		printf("success*2!!");
	else
		printf("fail");
}

void rhythmGame2(int success, int number, int number2, int i, int j)
{
	void animation2(int a, int b, int x, int y);
	clock_t start;
	start = clock();
	int success1 = 0, success2 =0;

	while(clock() - start <= 1550 )
	{
		
		switch(number)
		{
		
			case 1: animation2(1, 29, 1+29*j,29-14*i);
					
					if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
					success1 = 1;
					
					
					
					break;

			case 2: animation2(30,29, 1+29*j,29-14*i);
					
					if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
					success1 = 1;
					
				
					
					
					break;
			case 3: animation2(59,29, 1+29*j,29-14*i);
					
					if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
					success1 = 1;
					
					
					
					break;
			case 4: animation2(1,15, 1+29*j,29-14*i);
					
					if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
					success1 = 1;
					
					
					
					break;
			case 5: animation2(30,15, 1+29*j,29-14*i);
					
					if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
					success1 = 1;
					
					
					
					break;
			case 6: animation2(59,15, 1+29*j,29-14*i);
					
					if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
					success1 = 1;
					
					
					
					break;
			case 7: animation2(1,1, 1+29*j,29-14*i);
					
					if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
					success1 = 1;
					
					
					
					break;
			case 8: animation2(30,1, 1+29*j,29-14*i);
					
					if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
					success1 = 1;
					
					
					
					break;
			case 9: animation2(59,1, 1+29*j,29-14*i);
					
					if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
					success1 = 1;
					
					
					
					break;
		}

		switch(number2)
		{
		
			case 1: 
					
					if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
					success2 = 1;
					
					
					
					break;

			case 2:
					
					if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
					success2 = 1;
					
					
					
					
					break;
			case 3: 
					if (kbhit()!=0){
					if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
					success2 = 1;
					
					
					}
					break;
			case 4:
					if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
					success2 = 1;
					
					
					
					break;
			case 5:
					
					if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
					success2 = 1;
					
					
					
					break;
			case 6:
					
					if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
					success2 = 1;
					
					
					
					break;
			case 7: 
					
					if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
					success2 = 1;
					
					
					
					break;
			case 8:
					
					if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
					success2 = 1;
					
					
					
					break;
			case 9:
					
					if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
					success2 = 1;
					
					
					
					break;
		}

	}

	while(clock() - start <= 3050 )
	{
		
		if(success1 == 1)
		{
					switch(number)
				{
		
				case 1: 
						
						if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
						success1 = 2;
					
					
						
						break;

				case 2: 
						
						if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
						success1 = 2;
					
					
						
					
						break;
				case 3:
						
						if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
						success1 = 2;
					
					
						
						break;
				case 4: 
					
						if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
						success1 = 2;
					
					
						
						break;
				case 5: 
						
						if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
						success1 = 2;
					
					
						
						break;
				case 6: 
						
						if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
						success1 = 2;
					
					
						
						break;
				case 7:
						
						if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
						success1 = 2;
					
					
						
						break;
				case 8:
						
						if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
						success1 = 2;
					
					
						
						break;
				case 9: 
						
						if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
						success1 = 2;
					
					
						
						break;
				}
			break;
		}

		if(success2 == 1)
		{
					switch(number2)
				{
		
				case 1: 
						
						if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
						success2 = 2;
					
					
						
						break;

				case 2: 
						
						if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
						success2 = 2;
					
					
						
					
						break;
				case 3:
						
						if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
						success2 = 2;
					
					
						
						break;
				case 4: 
						
						if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
						success2 = 2;
					
					
						
						break;
				case 5: 
						
						if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
						success2 = 2;
					
					
						
						break;
				case 6: 
					
						if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
						success2 = 2;
					
					
						
						break;
				case 7:
						
						if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
						success2 = 2;
					
				
						
						break;
				case 8:
						
						if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
						success2 = 2;
					
					
						
						break;
				case 9: 
						if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
						success2 = 2;
					
					
						
						break;
				}
			break;
		}
		
	}

	if(success1 == 1)
		printf("success1");
	else if(success1 == 2)
		printf("success1*2!!");
	else
		printf("fail1");

	if(success2 == 1)
		printf("success2");
	else if(success1 == 2)
		printf("success2*2!!");
	else
		printf("fail2");

}

void rhythmGame3(int success, int number, int number2, int number3, int i, int j, int i2, int j2)
{
	void animation3(int a, int b, int x, int y, int x2, int y2);
	clock_t start;
	start = clock();
	int success1 = 0, success2 =0, success3 =0;;

	while(clock() - start <= 1550 )
	{
	
		
		switch(number)
		{
		
			case 1: animation3(1, 29, 1+29*j,29-14*i, 1+29*j2,29-14*i2);
					
					if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
					success1 = 1;
					
					
					
					break;

			case 2: animation3(30,29, 1+29*j,29-14*i, 1+29*j2,29-14*i2);
					
					if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
					success1 = 1;
					
					
					
					
					break;
			case 3: animation3(59,29, 1+29*j,29-14*i, 1+29*j2,29-14*i2);
					
					if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
					success1 = 1;
					
					
					
					break;
			case 4: animation3(1,15, 1+29*j,29-14*i, 1+29*j2,29-14*i2);
					
					if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
					success1 = 1;
					
					
					
					break;
			case 5: animation3(30,15, 1+29*j,29-14*i, 1+29*j2,29-14*i2);
					
					if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
					success1 = 1;
					
				
					
					break;
			case 6: animation3(59,15, 1+29*j,29-14*i, 1+29*j2,29-14*i2);
					
					if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
					success1 = 1;
					
					
					
					break;
			case 7: animation3(1,1, 1+29*j,29-14*i, 1+29*j2,29-14*i2);
					
					if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
					success1 = 1;
					
					
					
					break;
			case 8: animation3(30,1, 1+29*j,29-14*i, 1+29*j2,29-14*i2);
					
					if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
					success1 = 1;
					
					
					
					break;
			case 9: animation3(59,1, 1+29*j,29-14*i, 1+29*j2,29-14*i2);
					
					if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
					success1 = 1;
					
					
					
					break;
		}

		switch(number2)
		{
		
			case 1: 
					
					if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
					success2 = 1;
					
					
					
					break;

			case 2:
					
					if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
					success2 = 1;
					
					
					
					
					break;
			case 3: 
					
					if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
					success2 = 1;
					
				
					
					break;
			case 4:
					
					if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
					success2 = 1;
					
					
					
					break;
			case 5:
					
					if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
					success2 = 1;
					
					
					
					break;
			case 6:
					
					if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
					success2 = 1;
					
					
					
					break;
			case 7: 
					
					if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
					success2 = 1;
					
					
					
					break;
			case 8:
				
					if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
					success2 = 1;
					
					
					
					break;
			case 9:
					
					if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
					success2 = 1;
					
					
					
					break;
		}

		switch(number3)
		{
		
			case 1: 
					
					if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
					success3 = 1;
					
					
					
					break;

			case 2:
					
					if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
					success3 = 1;
					
					
					
					
					break;
			case 3: 
					
					if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
					success3 = 1;
					
					
					
					break;
			case 4:
					
					if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
					success3 = 1;
					
					
					
					break;
			case 5:
					
					if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
					success3 = 1;
					
					
					
					break;
			case 6:
					
					if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
					success3 = 1;
					
					
					
					break;
			case 7: 
					
					if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
					success3 = 1;
					
					
					
					break;
			case 8:
					
					if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
					success3 = 1;
					
					
					
					break;
			case 9:
					
					if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
					success3 = 1;
					break;
		}
		
	}
	
	while(clock() - start <= 3050 )
	{
		
		if(success1 == 1)
		{
					switch(number)
				{
		
				case 1: 
						
						if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
						success1 = 2;
					
					
						
						break;

				case 2: 
						
						if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
						success1 = 2;
					
					
						
					
						break;
				case 3:
						
						if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
						success1 = 2;
					
				
						
						break;
				case 4: 
						
						if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
						success1 = 2;
					
					
						
						break;
				case 5: 
					
						if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
						success1 = 2;
					
					
						
						break;
				case 6: 
						
						if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
						success1 = 2;
					
					
						
						break;
				case 7:
						
						if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
						success1 = 2;
					
					
						
						break;
				case 8:
						
						if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
						success1 = 2;
					
					
						
						break;
				case 9: 
						
						if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
						success1 = 2;
					
					
						
						break;
				}
			break;
		}

		if(success2 == 1)
		{
					switch(number2)
				{
		
				case 1: 
						
						if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
						success2 = 2;
					
					
						
						break;

				case 2: 
						
						if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
						success2 = 2;
					
					
						
					
						break;
				case 3:
						
						if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
						success2 = 2;
					
					
						
						break;
				case 4: 
						
						if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
						success2 = 2;
					
					
						
						break;
				case 5: 
						
						if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
						success2 = 2;
					
					
						
						break;
				case 6: 
						
						if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
						success2 = 2;
					
					
						
						break;
				case 7:
						
						if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
						success2 = 2;
					
					
						
						break;
				case 8:
						
						if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
						success2 = 2;
					
					
						
						break;
				case 9: 
						
						if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
						success2 = 2;
						
						break;
				}
			break;
		}

		if(success3 == 1)
		{
					switch(number3)
			{
		
				case 1: 
					
						if(GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
						success3 = 1;
					
					
						
						break;

				case 2:
						
						if(GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
						success3 = 1;
					
					
						
					
						break;
				case 3: 
						
						if(GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
						success3 = 1;
					
					
						
						break;
				case 4:
						
						if(GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
						success3 = 1;
					
					
						
						break;
				case 5:
					
						if(GetAsyncKeyState(VK_NUMPAD5) & 0x8000)
						success3 = 1;
					
					
						
						break;
				case 6:
					
						if(GetAsyncKeyState(VK_NUMPAD6) & 0x8000)
						success3 = 1;
					
					
						
						break;
				case 7: 
					
						if(GetAsyncKeyState(VK_NUMPAD7) & 0x8000)
						success3 = 1;
					
					
						
						break;
				case 8:
					
						if(GetAsyncKeyState(VK_NUMPAD8) & 0x8000)
						success3 = 1;
					
					
						
						break;
				case 9:
					
						if(GetAsyncKeyState(VK_NUMPAD9) & 0x8000)
						success3 = 1;
					
					
						
						break;
				}
			break;
		}

		
	}

	if(success1 == 1)
		printf("success1");
	else if(success1 == 2)
		printf("success1*2!!");
	else
		printf("fail1");

	if(success2 == 1)
		printf("success2");
	else if(success1 == 2)
		printf("success2*2!!");
	else
		printf("fail2");

	if(success2 == 1)
		printf("success3");
	else if(success1 == 2)
		printf("success3*2!!");
	else
		printf("fail3");

	

}

void animation(int x, int y)
{
	int i,j,k;

	for(k=0;k<6;k++)
	{
		for(int i=y+ k;i<SQUARE_SIZE + y - k;i++)
		{
			textcolor(204);
			Gotoxy(x + 2* k,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(x+ 2* k + 1,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + x - 2 * k - 1,i);
		    printf("%c",'k');

			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + x - 2*k - 2,i);
		    printf("%c",'k');
		}
	
		for(int j=x + 2*k;j<SQUARE_SIZE*2+x - 2*k;j++)
		{
			textcolor(204);
			Gotoxy(j,y + k);
			printf("%c",'k');
		
			textcolor(204);
			Gotoxy(j,SQUARE_SIZE + y - 1 - k);
			printf("%c",'k');
		}
		Sleep(70);
	}
		textcolor(7);


}

void animation2(int a, int b, int x, int y)
{
	int i,j,k;

	for(k=0;k<6;k++)
	{
		for(int i=b+ k;i<SQUARE_SIZE + b - k;i++)
		{
			textcolor(204);
			Gotoxy(a + 2* k,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(a+ 2* k + 1,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + a - 2 * k - 1,i);
		    printf("%c",'k');

			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + a - 2*k - 2,i);
		    printf("%c",'k');
		}
	
		for(int j=a + 2*k;j<SQUARE_SIZE*2+a - 2*k;j++)
		{
			textcolor(204);
			Gotoxy(j,b + k);
			printf("%c",'k');
		
			textcolor(204);
			Gotoxy(j,SQUARE_SIZE + b - 1 - k);
			printf("%c",'k');
		}

		for(int i=y+ k;i<SQUARE_SIZE + y - k;i++)
		{
			textcolor(204);
			Gotoxy(x + 2* k,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(x+ 2* k + 1,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + x - 2 * k - 1,i);
		    printf("%c",'k');

			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + x - 2*k - 2,i);
		    printf("%c",'k');
		}
	
		for(int j=x + 2*k;j<SQUARE_SIZE*2+x - 2*k;j++)
		{
			textcolor(204);
			Gotoxy(j,y + k);
			printf("%c",'k');
		
			textcolor(204);
			Gotoxy(j,SQUARE_SIZE + y - 1 - k);
			printf("%c",'k');
		}
		Sleep(120);
	}
		textcolor(7);

}

void animation3(int a, int b, int x, int y, int x2, int y2)
{
	int i,j,k;

	for(k=0;k<6;k++)
	{
		for(int i=b+ k;i<SQUARE_SIZE + b - k;i++)
		{
			textcolor(204);
			Gotoxy(a + 2* k,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(a+ 2* k + 1,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + a - 2 * k - 1,i);
		    printf("%c",'k');

			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + a - 2*k - 2,i);
		    printf("%c",'k');
		}
	
		for(int j=a + 2*k;j<SQUARE_SIZE*2+a - 2*k;j++)
		{
			textcolor(204);
			Gotoxy(j,b + k);
			printf("%c",'k');
		
			textcolor(204);
			Gotoxy(j,SQUARE_SIZE + b - 1 - k);
			printf("%c",'k');
		}

		for(int i=y+ k;i<SQUARE_SIZE + y - k;i++)
		{
			textcolor(204);
			Gotoxy(x + 2* k,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(x+ 2* k + 1,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + x - 2 * k - 1,i);
		    printf("%c",'k');

			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + x - 2*k - 2,i);
		    printf("%c",'k');
		}
	
		for(int j=x + 2*k;j<SQUARE_SIZE*2+x - 2*k;j++)
		{
			textcolor(204);
			Gotoxy(j,y + k);
			printf("%c",'k');
		
			textcolor(204);
			Gotoxy(j,SQUARE_SIZE + y - 1 - k);
			printf("%c",'k');
		}

		for(int i=y2+ k;i<SQUARE_SIZE + y2 - k;i++)
		{
			textcolor(204);
			Gotoxy(x2 + 2* k,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(x2+ 2* k + 1,i);
		    printf("%c",'k');
		
			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + x2 - 2 * k - 1,i);
		    printf("%c",'k');

			textcolor(204);
			Gotoxy(SQUARE_SIZE*2 + x2 - 2*k - 2,i);
		    printf("%c",'k');
		}
	
		for(int j=x2 + 2*k;j<SQUARE_SIZE*2+x2 - 2*k;j++)
		{
			textcolor(204);
			Gotoxy(j,y2 + k);
			printf("%c",'k');
		
			textcolor(204);
			Gotoxy(j,SQUARE_SIZE + y2 - 1 - k);
			printf("%c",'k');
		}
		Sleep(150);
	}
		textcolor(7);

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
	/*
	animation(1,1);
	animation(1,15);
	animation(1,29);
	animation(30,1);
	animation(30,15);
	animation(30,29);
	animation(59,1);
	animation(59,15);
	animation(59,29);
	*/
	rhythmGameMain();
	
	return 0;
}