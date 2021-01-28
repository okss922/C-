#include<stdio.h>
int main()
{
	int a , b , c , s , S;
	printf("请输入一个三位数。\n"); 
	scanf("%d" ,&s);
	a = s / 100;
	b = (s % 100) /10;
	c = s % 10;
	S = a + b * 10 + c * 100;
	printf("%d互换之后的数为%d" , s , S);
	
	return 0;
 } 
