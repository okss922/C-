#include<stdio.h>
int main()
{
	int b = 0;
	scanf("%d" , &b);
	while(b>0)
	{
		printf("%d" , b%10);
		b = b /10;
	}
	return 0;
} 
