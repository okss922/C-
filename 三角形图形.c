#include<stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	int a = 0;
	scanf("%d" , &a); 
	for(i = 1 ;i <= a;i++)
	{
		do
		{
			printf("*");
			j++;
		}while(j<=i);
		printf("\n");
		j = 1;
	}
	return 0;
}
