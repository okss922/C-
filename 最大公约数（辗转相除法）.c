#include<stdio.h>
int main()
{
	int a , b ,t , m , n;
	printf("请输入两个数。\n");
	scanf("%d %d" , &a , &b);
	m = a;
	n = b; 
	while( b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	printf("%d和%d的最大公约数是%d\n" , m , n ,a );
	return 0;
 } 
