#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int t = 1;
	int a = 0;
	int b = 0;
	scanf("%d %d" , &m , &n);
	a = m;
	b = n;
	while(m != 0 && n != 0)
	{
		if(m > n)
		{
			m = m % n;
		}
		else
		{
			n = n % m;
		}
	}
	if(n != 0)
	{
		printf("%d" , n + a*b/n);
	}else
	{
		printf("%d" , m + a*b/m);
	}
	return 0;
}
