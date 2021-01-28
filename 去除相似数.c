/*#include<stdio.h>
int main()
{
	int i = 0;
	int j =0;
	int a[100] = {0};
	int n = 0;
	scanf("%d" , &n);
	for(i = 0;i < n;i++)
	{
		scanf("%d" , &a[i]);
	}
	for(i = 0;i<n;i++)
	{
		for(j = i +1 ; j < n ;j++)
		{
			if(a[i] == a[j])
			{
				a[j] = 0;
			}
		}
	}
	for(i = 0;i<n;i++)
	{
		if(a[i] != 0)
		{
			printf("%d " , a[i]);
		}
	}
	return 0;
}*/
#include<stdio.h>
int main()
{
	int i = 0;
	int j =0;
	int a[100] = {0};
	int n = 0;
	int k = 0;
	scanf("%d" , &n);
	for(i = 0;i < n;i++)
	{
		scanf("%d" , &a[i]);
	}
	for(i = 0;i<n;i++)
	{
		for(j = i +1 ; j < n ;j++)
		{
			if(a[i] == a[j])
			{
				for(k =j;k<n-1;k++)
				{
					a[k] = a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(i = 0;i<n;i++)
	{
			printf("%d " , a[i]);
	}
	return 0;
}
