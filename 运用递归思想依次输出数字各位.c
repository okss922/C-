#include<stdio.h>
void pint(int m)
{
	if(m > 9)
	{
		pint(m/10);
	}
	printf("%d " , m%10);       //Ë³ĞòÊä³ö 
}
int main()
{
	int x = 0;
	scanf("%d" , &x);
	pint(x);
	return 0;
}
