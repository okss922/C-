#include<stdio.h>
int year_sum(int a , int b , int c)    //���㵽��������ǰ���ܹ����� 
{
	int i = 0;     //���㵽������֮ǰ�е����� 
	int j = 0;      //���㵽������֮ǰ�е�ƽ�� 
	int sum = 0;
	int d[] = {31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};  //ƽ��ÿ���µ����� 
	int e[] = {31 , 29 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31};  //����ÿ���µ����� 
	while(a > 1)
	{
		a--;
		if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0 )    //�ж�ƽ���� 
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
	printf("����������%c" , a[i]);
	return 0; 
} 
