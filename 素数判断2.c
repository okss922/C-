#include<stdio.h>
void sp(int x)
{
	int i = 0;
	for(i = 2;i<x;i++)
	{
		if(x%i == 0)
		{
			printf("���������������\n");
			break;
		}
	}
	if(i == x)
	{
		printf("�������������\n");
	}
} 
int main()
{
	int x =0;
	scanf("%d" , &x);
	sp(x);
	return 0;
}
