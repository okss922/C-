#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	char p[] = {0};	
	for(i = 0;i<3;i++)
	{
		printf("����������:");
		scanf("%s" , &p);
		if(strcmp(p , "123456") == 0 )
		{
			printf("����ɹ�\n");
			break;
		}
		system("cls");
		
	}
	if(i == 3)
	{
		printf("��������������3�Σ��˳�����\n");
	}
	return 0;
} 
