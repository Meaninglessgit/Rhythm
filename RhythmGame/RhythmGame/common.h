#include <stdio.h>   /* required for file operations */
#include <windows.h>
#include <stdlib.h>
#include <mmsystem.h>
#include <conio.h>
#include <time.h>

#pragma comment(lib, "winmm.lib")

#define COMMAND_SIZE 256
#define SQUARE_SIZE   12

void Gotoxy(int x, int y);
void textcolor(int color_number);
void drawSqureSub(int x, int y);
void drawSqure(int x,int y);
void eraseAll();

void rhythmGameMain(int type);
void rhythmGame1();
void rhythmGame2(int success, int number, int number2, int i, int j);
void rhythmGame3(int success, int number, int number2, int number3, int i, int j, int i2, int j2);

void animation(int x, int y);
void animation2(int a, int b, int x, int y);
void animation3(int a, int b, int x, int y, int x2, int y2);

void menu();
void title();