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
		printf("����Ӯ�ˣ�\n");
	}
	else if(ret == '*')
	{
		printf("���Ӯ�ˣ�\n");
	}
	else if(ret == 'p')
	{
		printf("ƽ��\n");
	}
}
int main()
{
	int m = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���������ѡ��\n");
		scanf("%d" , &m);
		switch(m)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("��������ַ�\n");
				break;
		}
	}while(m);
	return 0;
}
