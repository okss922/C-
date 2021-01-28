#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	scanf("%d %d" , &m , &n);
	int a[m][n];
	for(i = 0;i<m;i++)
	{
		for(j = 0;j<n;j++)
		{
			scanf("%d" ,&a[i][j]);
		}
	}
	char t ; 
	scanf("%d" , &k);
	scanf(" %c" , &t);
	int c = 0;
	int d = 0;
	int h = 0;
	scanf("%d %d" , &c , &d);
	for(;k>0;k--)
	{
		if(t =='c')
		{
			for(j = 0;j<n;j++)
			{
				h = a[j][c - 1];
				a[j][c -1] = a[j][d -1];
				a[j][d -1] = h;
			}
		}
		if(t =='r')
		{
			for(i = 0;i<m;i++)
			{
				h = a[c -1][i];
				a[c -1][i] = a[d -1][i];
				a[d -1][i] = h;
			}
		}
	}
	for(i = 0;i<m;i++)
	{
		for(j = 0;j<n;j++)
		{
			printf("%d " , a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
