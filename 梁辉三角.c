#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int a[100][100] = {0};
	int n = 0;
	int l = 0;
	scanf("%d" , &n);
	for(i = 0;i < n;i++)
	{
		for(j = 0;j < i + 1;j++)
		{
			if(j ==0)
			{
				a[i][j] = 1;
			}else if(i == j)
			{
				a[i][j] = 1;
			}else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}
	for(i = 0;i < n ;i++)
	{
		for(j = 0;j < n - i - 1;j++)
		{
			printf(" ");
		}
		for(l = 0 ; l<i+1 ; l++)
		{
			printf("%d ", a[i][l]);
		}
		printf("\n");
	}
	return 0;
}
