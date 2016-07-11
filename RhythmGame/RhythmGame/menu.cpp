#include "common.h"

void title()
{
	Gotoxy(10,3);
	printf("            r,    .;,          ;:     i:iiri:         i:ii;i;iv.         :i      :vi;ii::i;ir7i     \n");
Sleep(55);
	Gotoxy(10,4);
printf("           iB@    7@E         ,@B    .B@B@B@B@B;     i@@B@B@B@Br        2@B1     SB@B@B@@@@@B@P     \n");
Sleep(55);
Gotoxy(10,5);
printf("           .@0    iB1         .BM     @M     .@Br    ,@5               .@uSB.          B@           \n");
Sleep(55);
Gotoxy(10,6);
printf("           ,Bq    :@J          @G     BM      r@u    ,@F               @B  @B          @B           \n");
Sleep(55);
Gotoxy(10,7);
printf("           .@S    :BJ         .BG     @Z      @B     .@u              jBi  r@J         B@           \n");
Sleep(55);
Gotoxy(10,8);
printf("           .Bk    :@L          @q     BOrLL20@7      ,BP:;rrr7i      .Bq    E@.        BB           \n");
Sleep(55);
Gotoxy(10,9);
printf("           .@1    :BL         .@q     BZJu52XPqL     .@0SPENZOS      GB      BO        OB           \n");
Sleep(55);
Gotoxy(10,10);
printf("           .B5    :@7          @S     MP      .BB.   .BL            7@S:i7rr:q@L       OO           \n");
Sleep(55);
Gotoxy(10,11);
printf("           .@J    ,B2         .Bu     Mk       ;@v   .@L           .@FvuF1F2U7qB.      E8           \n");
Sleep(55);
Gotoxy(10,12);
printf("           vB:     0M,        5@.     ZF       F@:   .Mv           qM          MP      NN           \n");
Sleep(55);
Gotoxy(10,13);
printf("       .  rMj       NOL.    iqM:      G5....:rZZi    .MY .....,.  vMr          r@v     PZ           \n");
Sleep(55);
Gotoxy(10,14);
printf("      .MqES:         :UENEqEF;        1UFPXNSu:      .52kXPqXqZ5 .q1            uE.    11           \n");
Sleep(55);
Gotoxy(10,15);
printf("       :,.:.         .,,,.,.,.        :,..,.,..       :,..,.,.:.  ::            ::     ::           \n");
Sleep(55);
Gotoxy(10,16);
printf("           ::      .i,       .::      :,      .i:     :.           ::          ::      ::           \n");
Sleep(55);
Gotoxy(10,17);
printf("            :.     :,         .:.     ,.       .:.    :.            :.        .:.      .,           \n");
Sleep(55);
Gotoxy(10,18);
printf("            .      .           .      ..        .     ..             ..... . ..        ..           \n");
Sleep(55);

                                                                                                                                 

}

void menu()  //메뉴선택
{
	title();
int ch,ch2;
int i;
//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE ),14);

Gotoxy(55,28);
printf("1.시작");
Gotoxy(55,29);

printf( "2.종료");

for(;;)
{


   //scanf("%d", &ch);
   ch = getch();
   if(ch == '1')
   {
	   Gotoxy(55,26);
		printf("  모드  ");
		Gotoxy(55,27);
		printf("         ");
		Gotoxy(55,28);
		printf("1.서바이벌\n");
		Gotoxy(55,29);
		printf("2.점수\n");
		Gotoxy(55,30);
		printf("3.뒤로\n");
	while(1)
	{
		 ch2 = getch();
		 if(ch2 == '1')
		 {
			 rhythmGameMain(1);
		 }
		 else if(ch2 == '2')
		 {
			 rhythmGameMain(2);
		 }
		 else if(ch2 == '3')
		 {
			  system("cls");
			 menu();
		 }
		 else
		 {
			
		 }
	}
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
	
   
 }
}

}
