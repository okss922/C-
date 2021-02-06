#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int m = 0;
	int a[20] = {0};
	scanf("%d" , &m);
	for(j = 0;j < m;j++)
	{
		scanf("%d" , &a[j]);
	} 
	do
	{
		if(a[i] != i)
		{
			if(a[a[i]] == a[i])
			{
				printf("%d " , a[i]);
				break;
			}
			else
			{
				j = a[i];
				a[i] = a[a[i]];
				a[a[i]] = j;
			}
		}
		else
		{
			i++;
		} 
	}while(i < m);
	return 0;
}
