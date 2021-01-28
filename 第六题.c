#include<stdio.h>
int main()
{
	int ch = 0;
	while((ch = getchar()) != EOF)
	{
		if(ch <= 'Z' && ch >= 'A')
		{
			putchar(ch + 32);
		}else if(ch <='z' && ch >= 'a')
		{
			putchar(ch - 32);
		}
	}
	return 0;
} 



