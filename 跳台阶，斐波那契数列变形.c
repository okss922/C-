#include<stdio.h>
int f(int n)
{
	if(n <= 2)
	{
		return n;
	}else
	{
		return f(n - 1) + f(n - 2);       //运用了函数递归的思想。 
	}
}
int main() 
{
	int n = 0;
	scanf("%d" , &n);
	int ret = f(n); 
	printf("%d" ,ret);
	return 0;
}
