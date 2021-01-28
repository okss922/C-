#include<stdio.h>
void sp(int x)
{
	int i = 0;
	for(i = 2;i<x;i++)
	{
		if(x%i == 0)
		{
			printf("这个数不是素数。\n");
			break;
		}
	}
	if(i == x)
	{
		printf("这个数是素数。\n");
	}
} 
int main()
{
	int x =0;
	scanf("%d" , &x);
	sp(x);
	return 0;
}
