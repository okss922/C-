#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int t = 0;
	while(scanf("%d %d %d"  , &a , &b , &c) != EOF)
	{
		t = c / b;
		if(c % b != 0)
		{
			t ++; 
		}
		printf("%d" , a - t);
	}
	
	return 0;
}

