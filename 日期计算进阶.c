#include<stdio.h>
int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int i = 0;
	int t = 0;
	int a[] = { 0 , 3 , 3 , 6 , 1 , 4 , 6 , 2 , 5 , 0 , 3 , 5};
	int b[] = { -1 , 2 , 3 , -1 , 1 , 4 , -1 , 2 , 5 , 0 , 3 , 5};
	int c[] = {7 , 1 , 2 , 3 , 4 , 5 , 6};
	scanf("%d %d %d" , &year , &month , &day);
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
	{
		t = b[month - 1];
	}else
	{
		t = a[month - 1];
	}
	i = (year + (year/4) + (year/400) - (year/100) + ((t + day) - 1)) % 7;
	printf("今天是星期%d" , c[i]);
	return 0;
}
