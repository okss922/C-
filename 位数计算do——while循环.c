#include<stdio.h>
int main()
{
	int a , t;
	printf("请输入数字。\n");
	scanf("%d" , &a);
	do{
		a = a / 10;
		t++;
		
	}while(a > 0);
	printf("您输入的数字是%d位数。\n" , t); 
	return 0;
}
