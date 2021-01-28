#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int a[100] = {0};
	int max = 0;
	int t  = 0;
	scanf("%d" , &n);
	for(i = 0;i < n ; i++)
	{
		scanf("%d" , &a[i]);
	} 
	for(i = 0;i < n;i++)
	{
		max = a[i]; 
		for(j = i;j < n;j++)
		{
			if(a[j] > max)
			{
				t = max;
				max = a[j];
				a[j] = t;
			}
		}
		printf("%d " , max);
	}
	return 0;
} 
