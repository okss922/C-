#include<stdio.h>
int main()
{
	int b[100] = {0};
	int a = 0;
	int t = 0;
	int i = 0;
	int j = 0; 
	scanf("%d" ,&a);
	while(a > 0)
	{
		b[i] = a % 10;
		a = a /10;
		i++;
	}
	for(j = 0 ; j <= i ; j++)
	{
		if(b[j] == b[i-j])
		{
			t++;
		}
	}
	if(t == i/2 + 1)
	{
		printf("YES");
	}else
	{
		printf("NO");
	}
	return 0;
} 
