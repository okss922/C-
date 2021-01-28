#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char x[20] = {0};
	system("shutdown -s -t 60");
	while(1)
	{
		printf("请输入我是猪，否则电脑会在一分钟之后关机。\n");
		scanf("%s" , &x);
		if(strcmp(x,"我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
} 
