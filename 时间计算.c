#include<stdio.h>
int main()
{
	int t1 , t , t2 , a , b , T , A , B;
	printf("请输入时间和一段时间。\n");
	scanf("%d %d" , &t1 , &t);
	a = t1 / 100;
	b = t1 % 100;
	T = a * 60 + b;
	t2 = T + t;
	A = t2 / 60;
	B = t2 % 60;
	printf("在%d分钟之后的时间是%d时%d分。\n" , t , A , B);
	return 0;
 } 
