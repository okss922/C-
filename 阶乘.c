#include<stdio.h>
int jc(int i)
{
	if(i <= 1)
	{
		return 1;
	}
	else
	{
		return i * jc(i-1);
	}
}
int main()
{
	int i = 0;
	scanf("%d" , &i);
	printf("%d" , jc(i));
	return 0;
}


/*#include<stdio.h> 
int main()
{
	int a , b , c , n;
	printf("请输入数字。\n");
	scanf("%d" , &n);
	b = 1;
	c = n;
	do
	{
		b = b * n;
		n = n - 1;
	 } while(n > 1);
	 printf("%d的阶乘是%d。\n" , c ,b);
	return 0;
}*/ 


/*#include<stdio.h>
int main()
{
	int i , n , c;
	printf("请输入一个数字。\n");
	scanf("%d" , &n);
	c = 1;
	for(i = 1 ;i <= n;i++)
	{
		c = c * i; 
	}
	printf("%d的阶乘是%d。\n" , n , c);
	return 0;
 } */
  
