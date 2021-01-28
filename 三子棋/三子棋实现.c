#include"game.h"
#include"game.c" 
void menu()
{
	printf("**********************\n");
	printf("*** 1:play  0:exit ***\n");
	printf("**********************\n");
}
void game()
{
	char ret;
	char board[row][col] = {0};
	cshboard(board,row,col);
	dyboard(board,row,col);
	while(1)
	{
		playermove(board,row,col);
		dyboard(board,row,col);
		ret = pdsy(board,row,col);
		if(ret != 'c')
		{
			break;
		}
		computermove(board,row,col);
		dyboard(board,row,col);
		ret = pdsy(board,row,col);
		if(ret != 'c')
		{
			break;
		}
	}
	if(ret == '#')
	{
		printf("电脑赢了！\n");
	}
	else if(ret == '*')
	{
		printf("玩家赢了！\n");
	}
	else if(ret == 'p')
	{
		printf("平局\n");
	}
}
int main()
{
	int m = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你的选择\n");
		scanf("%d" , &m);
		switch(m)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误字符\n");
				break;
		}
	}while(m);
	return 0;
}
