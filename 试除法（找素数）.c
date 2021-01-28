#include<stdio.h>
int pd(int i)
{
	int j = 0;
	for(j = 2 ; j < i ; j++)
	{
		if(i % j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d" , &n);
	for(i = 2 ; i <= n ; i++)
	{
		if(pd(i))
		{
			printf("%d " , i);
		}
	}
	
	return 0;
} 
