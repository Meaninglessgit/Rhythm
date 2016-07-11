
#include <stdio.h>
#include <Windows.h>
#include <conio.h>

int main()  //메뉴선택
{

int ch;
int i;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE ),14);

for(;;)
{
printf("메뉴\n"
  "1.시작\n"
  "2.종료\n");

   //scanf("%d", &ch);
   ch = getch();
   if(ch == '1')
   {
	   system("cls");
	  printf("난이도\n"
		"1.쉬움\n"
		"2.보통\n"
		"3.어려움\n");
	 
	  break;
   }
   else if(ch == '2')
   {
	   break;
   }

   /*
 {
 if (ch==1)
 { printf("난이도\n"
  "1.쉬움\n"
  "2.보통\n"
  "3.어려움\n");
	break;
 }
 else if (ch==2)
 {
	 printf("종료합니다");
	 return 0; 
	
 }*/
else
 {
	system("cls");
   
 }
}
 return 0;
}
