#include<stdio.h>
int main()
{
	int amount , price;
	printf("请输入价格\n");
	scanf("%d" , &price);           //scanf("%d %d" ,…… )；双引号里面的之间用空格。 
	printf("请输入票面\n");
	scanf("%d" , &amount);
	printf("应该找您%d元\n" , amount - price);
	return 0;
 } 
