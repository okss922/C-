#include<stdio.h>
int main()
{
	int x , i , m , n , t , h;
	printf("请你输入一个整数。\n");
	scanf("%d" , &x);
	n = 2;
	for( n =2 ;n <= x;n++)
	{
		m = 0;
		for( i = 2; i < n; i++)
		{
			if(n % i == 0)
			{
				m = 1;
				break;
			}
		}
		if(m != 1)
		{
			printf("%d\n" , n );
		}
	}
}
