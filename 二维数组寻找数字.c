#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int x_1 = 0;
	int y_1 =0;
	int x_2 = 0;
	int y_2 = 0;
	scanf("%d %d" , &x_1 , &y_1);
	int a[x_1][y_1] ;
	for(i = 0;i < x_1;i++)
	{
		for(j = 0;j < y_1;j++)
		{
			scanf("%d" , &a[i][j]);
		}
	}
	scanf("%d %d" ,&x_2 ,&y_2);
	printf("%d" , a[x_2 -1][y_2 -1]);
	return 0;
}
