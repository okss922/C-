#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int x = 0;
	int y = 0;
	int a[100] = {0};
	scanf("%d %d" , &x , &y);
	for(i = 1;i<=x*y;i++)
	{
		scanf("%d" , &a[i]);
	}
	for(i = 1;i<=x*y;i++)
	{
		printf("%d " , a[i]);
		if(i%y == 0)
		{
			printf("\n");
		}
		
	}
	return 0;
}
