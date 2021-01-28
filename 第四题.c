#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d" , &a);
	printf("输入数字的八进制伟%o , 十六进制为%x" , a , a);   //%o 和 %x 可以分别直接将十进制数改为八进制和十六进制。 
	return 0;
}
