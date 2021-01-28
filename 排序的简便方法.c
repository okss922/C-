#include<stdio.h>
int main()
{
	int i = 1;
	int n = 0;
	int k = 0;
	int a[100] = {0};
	scanf("%d" , &n);
	for(i = 1;i <= n ;i++)
	{
		scanf("%d" , &k);
		a[k] = k;
	}
	for(i = 1; i <= 100 ;i++ )
	{
		if(a[i] != 0)
		printf("%d " , a[i]);
	}
	return 0;
}
