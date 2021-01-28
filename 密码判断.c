#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	char p[] = {0};	
	for(i = 0;i<3;i++)
	{
		printf("请输入密码:");
		scanf("%s" , &p);
		if(strcmp(p , "123456") == 0 )
		{
			printf("输入成功\n");
			break;
		}
		system("cls");
		
	}
	if(i == 3)
	{
		printf("输入错误次数超过3次，退出程序\n");
	}
	return 0;
} 
