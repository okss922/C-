#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char x[20] = {0};
	system("shutdown -s -t 60");
	while(1)
	{
		printf("������������������Ի���һ����֮��ػ���\n");
		scanf("%s" , &x);
		if(strcmp(x,"������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
} 
