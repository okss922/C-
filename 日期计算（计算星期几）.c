#include<stdio.h>
int year_sum(int a , int b , int c)    //计算到输入日期前的总共天数 
{
	int i = 0;     //计算到这个年份之前有的闰年 
	int j = 0;      //计算到这个年份之前有的平年 
	int sum = 0;
	int d[] = {31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};  //平年每个月的天数 
	int e[] = {31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};  //闰年每个月的天数 
	while(a > 1)
	{
		a--;
		if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0 )    //判断平闰年 
		{
			i++;
		}else
		{
			j++;
		}
	}
	sum = 365 * j + 366 * i;
	if(a % 4 == 0 && a % 100 != 0 && a % 400 == 0 )
	{
		while(b > 1)
		{
			sum = sum + e[b-2];
			b--;
		}
	}else
	{
		while(b > 1)
		{
			sum = sum + d[b-2];
			b--;
		}
	}
	sum = sum + c;
	return sum;
}

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int s = 0;
	int i = 0;
	char a[] = { '7' , '1' , '2' , '3' , '4' , '5' , '6' }; 
	scanf("%d %d %d" , &year , &month , &day);
	s = year_sum(year , month , day);
	i = s % 7;
	printf("今天是星期%c" , a[i]);
	return 0; 
} 
