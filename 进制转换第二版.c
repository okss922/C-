#include<stdio.h>
#include<math.h>
int exc_1(int a , int b)
{
	int i = 0;
	int sum = 0;
	while(a > 0)
	{
		sum = sum + a % 10 *pow(b,i);
		i++;
		a = a / 10;
	}
	return sum;
}

int exc_2(int a , int b)
{
	int c[100] = {0};
	int i = 0;
	int t = 0;
	while(a > 0)
	{
		c[i] = a % b;
		i++;
		a = a / b;
	} 
	while(i >= 0)
	{
		t = t * 10 + c[i];
		i--;
	}
	return t;
}

int main()
{
	int a = 0;
	int x = 0;
	int y = 0;
	int t = 0;
	int end = 0;
	printf("请输入需要转换的进制\n");
	scanf("%d %d" , &x , &y);
	printf("请输入需要转换的数字。\n");
	while(scanf("%d" , &a) != EOF)
	{
		t = exc_1(a , x);
		end = exc_2(t , y);
		printf("转换之后是：%d\n" , end);
	} 
    return 0;
}
