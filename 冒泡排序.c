/*#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int t = 0;
	int a[100] = {0};
	scanf("%d" , &n);
	for(i = 0; i < n ; i++)
	{
		scanf("%d"  , &a[i]);
	}
	for(i = 0;i < n ;i++)
	{
		for(j = 0 ; j < n - 1 - i  ; j++)
		{
			if(a[j] < a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	for(i = 0;i<n;i++)
	{
		printf("%d " , a[i]);
	}
	return 0;
}*/
#include<stdio.h>
void px(int a[] , int dx)
{
	int i = 0;
	int m = 0;
	int j = 0;
	for(i = 0; i < dx - 1;i++)
	{
		m = 1;
		for(j = 0; j < dx - 1 - i;j++)
		{
			if(a[j] < a[j + 1])
			{
				m = a[j];
				a[j] = a[j+1];
				a[j+1] = m;
				m = 0;
			}
		}
		if (m ==1)
		{
			break;
		}
	}
} 
int main()
{
	int a[50] = {0};
	int m = 0;
	int i = 0;
	scanf("%d" , &m);
	for(i = 0; i < m ;i++)
	{
		scanf("%d" , &a[i]);
	}
	px(a,m);
	for(i = 0;i< m ;i++)
	{
		printf("%d " , a[i]);
	}
	return 0 ;
}
