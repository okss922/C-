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
	printf("���������֡�\n");
	scanf("%d" , &n);
	b = 1;
	c = n;
	do
	{
		b = b * n;
		n = n - 1;
	 } while(n > 1);
	 printf("%d�Ľ׳���%d��\n" , c ,b);
	return 0;
}*/ 


/*#include<stdio.h>
int main()
{
	int i , n , c;
	printf("������һ�����֡�\n");
	scanf("%d" , &n);
	c = 1;
	for(i = 1 ;i <= n;i++)
	{
		c = c * i; 
	}
	printf("%d�Ľ׳���%d��\n" , n , c);
	return 0;
 } */
  
