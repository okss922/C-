#include<stdio.h>
int main()
{
	int a[100][100] = {0};
	int b[100][100] = {0};
	int m = 0;
	int i = 0;
	int j = 0;
	int n = 0;
	scanf("%d %d" , &m ,&n);
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			scanf("%d" , &a[i][j]);
		}
	}
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			scanf("%d" , &b[i][j]);
		}
	}
	float t = 0;
	for(i = 0 ; i < m ; i++)
	{
		for(j = 0 ; j < n ; j++)
		{
			if(a[i][j] == b[i][j])
			{
				t++;
			}
		}
	}
	printf("%.2f" , t * 100.0/(m * n));
	return 0 ;
}
