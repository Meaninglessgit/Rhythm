
#include <stdio.h>
#include <Windows.h>
#include <conio.h>

int main()  //�޴�����
{

int ch;
int i;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE ),14);

for(;;)
{
printf("�޴�\n"
  "1.����\n"
  "2.����\n");

   //scanf("%d", &ch);
   ch = getch();
   if(ch == '1')
   {
	   system("cls");
	  printf("���̵�\n"
		"1.����\n"
		"2.����\n"
		"3.�����\n");
	 
	  break;
   }
   else if(ch == '2')
   {
	   break;
   }

   /*
 {
 if (ch==1)
 { printf("���̵�\n"
  "1.����\n"
  "2.����\n"
  "3.�����\n");
	break;
 }
 else if (ch==2)
 {
	 printf("�����մϴ�");
	 return 0; 
	
 }*/
else
 {
	system("cls");
   
 }
}
 return 0;
}
