#include<stdio.h>
int main()
{
	int a =0;
	int i = 0;
	int m = 0;
	scanf("%d" , &a);
	for(i = 1 ; i <6 ; i++)
	{
		int j = 0;
		for(j = 0 ; j < 5 - i ; j++)
		{
			printf(" ");
		}
		for(j = 0 ; j < i ; j++)
		{
			printf("%d " , a);
		}
		printf("\n");
	}
	return 0;
 } 
