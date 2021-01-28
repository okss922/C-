#include<stdio.h>
int main()
{
	int a[100] = {0};
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	int n = 0;
	int t = 0;
	int sum = 0;
	printf("请输入您要交换的进制的类别：\n");
	scanf("%d %d" , &x , &y);
	printf("请输入您要交换的数字。\n"); 
	scanf("%d" , &t);
	while(t > 0 )
	{
		a[i] = t % 10;
		t = t / 10;
		i++;
	}
	n = i;
	for(i = 1 ; i <= n ; i++)
	{
		for(j = 1 ; j <= i ; j++)
		{
			a[i] = a[i] * x;
		}
		sum = sum + a[i];
	}
	sum = sum + a[0] * 1;
	i = 0;
	while(sum > 0)
	{
		a[i] = sum % y;
		sum = sum / y;
		i++;
	}
	n = i;
	for(i = n - 1 ; i >= 0 ; i--)
	{
		printf("%d" , a[i]);
	}
	return 0;
} 
