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
void animation(int x, int y);

void rhythmGame();
