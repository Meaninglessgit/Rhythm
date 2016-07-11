#include "common.h"

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
void eraseAll()
{
	fflush(stdout);
	system("cls");
	Sleep(200);
	fflush(stdout);

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
