#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int a = 0;
	int b = 0;
	int c_1[100] = {0};
	int c_2[100] = {0};
	scanf("%d %d" ,&a , &b);
	for(i = 0;i < a ;i++)
	{
		scanf("%d" , &c_1[i]);
	}
	for(j = 0;j<b;j++)
	{
		scanf("%d" , &c_2[j]);
	}
	i = 0;
	j = 0;
	while(i <a && j< b)
	{
		if(c_1[i] < c_2[j])
		{
			printf("%d " , c_1[i]);
			i++;
		}else
		{
			printf("%d " , c_2[j]);
			j++;
		}
	}
	if(i<a)
	{
		for(;j<b;j++)
		{
			printf("%d " , c_2[j]);
		}
	}else
	{
		for(;i<a;i++)
		{
			printf("%d " ,c_1[i]);
		}
	}
	return 0;
}
