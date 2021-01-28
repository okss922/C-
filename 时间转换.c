#include<stdio.h>
int main()
{
	int a = 0;
	int h = 0;
	int b = 0;
	int m = 0;
	int s = 0;
	scanf("%d" , &a);
	h = a / 3600;
	b = a % 3600;
	m = b /60;
	s = b % 60;
	printf(" %d %d %d" , h , m , s);
	return 0;
 } 
