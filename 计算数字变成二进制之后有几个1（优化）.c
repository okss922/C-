#include<stdio.h>
/*int main()
{
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d" , &n);
	for(i = 0;i < 32;i++)
	{
		if(1 == ((n >> i) & 1))
		{
			count++;
		}
	}
	printf("%d" , count);
	return 0;
} */
int main()
{
	int n = 0;
	int count = 0;
	scanf("%d" , &n);
	while(n)
	{
		count++;
		n = n & (n - 1);
	}
	printf("%d" , count);
	return 0;
}
