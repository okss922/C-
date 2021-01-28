#include<stdio.h>
int main()
{
	int i = 0;                    //用于循环的变量。 
	int c[100] = {0};             //数组的定义。 
	int a = 0;                     //保存有几个数字的变量。操控数字输入到数组之中。 
	int b= 0;                     //保存要插入的数字。 
	scanf("%d" , &a);               
	for(i = 0 ; i < a;i++)
	{
		scanf("%d " , &c[i]);          //数组输入数字的方法。 
	}
	scanf("%d" , &b);
	for(i = a-1 ; i >= 0;i--)
	{
		if(c[i] > b)
	{
		c[i + 1] = c[i];
	}else
	{
		c[i+1] = b;
		break;
	}
	}
	if(i == -1)
	{
		c[0] = b;
	} 
	for(i = 0 ; i <= a ; i++)
	{
		printf("%d " , c[i]);
	}
	return 0;
} 
