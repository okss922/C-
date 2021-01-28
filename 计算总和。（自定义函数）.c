#include<stdio.h>
void sum(int b , int e)
{
	int sum , i , t;
	if(e < b)
	{
		t = e;
		e = b;
		b = t;
	}
	for(i = b ; i<=e ; i++)
	{
		sum = sum + i;
	}
	printf("%d到%d的总和是：%d。\n" , b , e , sum);
 } 
 int main()
 {
 	int a , m , n ,t;
 	printf("请输入两个数字。\n");
 	scanf("%d %d" , &a , &m);
	sum(a , m);
	return 0; 
 }
