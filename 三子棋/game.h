#include<stdio.h>
#define row 3
#define col 3
void cshboard(char board[row][col] ,int x,int y);
void dyboard(char board[row][col] ,int x,int y);
void playermove(char board[row][col],int x,int y);
void computermove(char board[row][col],int x,int y);
char pdsy(char board[row][col],int x,int y);
int full(char board[row][col],int x,int y);
