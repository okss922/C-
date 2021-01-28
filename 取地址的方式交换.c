#include<stdio.h>
void exchange(int *a,int *b)
{
	int x = 0;
	x = *a;
	*a = *b;
	*b = x;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d" , &a ,&b);
	exchange(&a , &b);
	printf("%d %d" ,a , b);
	return 0;
}
