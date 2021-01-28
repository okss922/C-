#include<stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	int a = 0;
	int t = 1;
	scanf("%d" ,&a);
	for(i = 1 ; i <= a ; i++ )
	{
		while(j <= a - i)
		{
			printf(" ");
			j++;
		}
		j = 1;
		do
		{
			printf("* ");
			t++;
		}while(t <= i);
		t = 1;
		printf("\n");
	}
	return 0;
}
