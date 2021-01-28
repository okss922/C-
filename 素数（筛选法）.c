#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int a[100] = {0};
	int n = 0;
	int m = 0;
	scanf("%d" , &n);
	for(i = 0 ;i <= n ; i++ )
	{
		a[i] = i;
	}
	for(i = 2 ; i<=n;i++)
	{
		for(j = 2 ; j < i ; j++)
		{
			if(a[i] % j == 0)
			{
				a[i] = 0;
			}
		}
	}
	for(i = 2 ; i <=n;i++)
	{
		if(a[i] == 0)
		{
			m++;
		}else
		{
			printf("%d " , a[i]);
		}
		
	}
	printf("\n%d" , m);
	return 0;
} 
