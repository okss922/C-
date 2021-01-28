#include"game.h"
#include<time.h>
#include<stdlib.h>
void cshboard(char board[row][col] ,int x,int y)
{
	int i = 0;
	int j = 0;
	for(i = 0;i<x;i++)
	{
		for(j = 0 ; j < y ; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void dyboard(char board[row][col] ,int x,int y)
{
	int i = 0;
	int j = 0;
	for(i = 0;i < x;i++)
	{
		for(j = 0 ; j<y;j++)
		{
			printf(" %c " , board[i][j]);
			if(j<y-1)
			{
				printf("|");
			}
		}
		printf("\n");
		for(j = 0;j <y;j++)
		{
			printf("---");
			if(j<y-1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}
void playermove(char board[row][col],int x,int y)
{
	int ROW = 0;
	int COL = 0;
	while(1)
	{
		printf("玩家走\n请输入坐标。\n");
		scanf("%d %d" , &ROW , &COL);
		if(ROW>=1 && ROW<=x && COL>= 1 && COL<= y)
		{
			if(board[ROW-1][COL-1] == ' ')
			{
				board[ROW-1][COL-1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("输入错误坐标。\n");
		}
	}
}
void computermove(char board[row][col],int x,int y)
{
	int ROW = 0;
	int COL = 0;
	printf("电脑走\n");
	while(1)
	{
		ROW = rand()%row;
		COL = rand()%col;
		if(board[ROW][COL] == ' ')
		{
			board[ROW][COL] = '#';
			break;
		}
	}
}
char pdsy(char board[row][col],int x ,int y)
{
	int i = 0;
	int j = 0;
	int m = 0;
	for(i = 0;i<x;i++)
	{
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for(j = 0;j<y;j++)
	{
		if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	if(1 == full(board,row,col))
	{
		return 'p';
	}
	else
	{
		return 'c';
	}
}
int full(char board[row][col],int x,int y)
{
	int i = 0;
	int j = 0;
	for(i = 0;i < x;i++)
	{
		for(j = 0;j < y;j++)
		{
			if(board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}
