#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int a[100] = {0};
	int m = 0;
	int n = 0;
	int t = 0;
	scanf("%d" , &m);
	for(i = 0 ; i < m ; i++)
	{
		scanf("%d" , &a[i]);
	}
	scanf("%d" , &n);
	for(i = 0 ; i < m ; i++)
	{
		if(a[i] != n)
		{
			a[j++] = a[i];
			t++;
		}
	}
	for(j = 0 ; j < t ; j++ )
	{
		printf("%d " , a[j]);
	}
	return 0 ;
} 
