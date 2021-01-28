#include<stdio.h>
int max(int a , int b)
{
	int c;
	if( a > b){
		c = a; 
	}else{
		c = b;
	}
	return c;
}
int main()
{
	int a , b;
	printf("请输入两个数字。\n");
	scanf("%d %d" , &a , &b);
	printf("两个数的最大值为%d。\n" , max(a , b));
	return 0;
}
