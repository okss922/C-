#include<stdio.h>
int main()
{
	printf("请输入数字。\n");
	int a , t;
	scanf("%d" , &a);
	t++;
	a = a/10; 
	while(a > 0){
		a = a / 10;
		t++;
	}
	printf("您输入的数字是%d位数。\n" , t);
	return 0;
}
