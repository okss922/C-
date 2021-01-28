#include<stdio.h>  
#include"add.c"       //引用函数。方便之后的作用。 
#include"sub.c"
#include"mul.c"
#include"div.c"
int main()
{
	int i = 0;
	int j = 0;
	int x = 0;
	char f ;
	scanf("%d  %c %d" , &i , &f , &j);
	if(f == '+')
	{
		x = add(i , j);
	}
	else if(f == '-')
	{
		x = sub(i , j);
	}
	else if(f == '*')
	{
		x = mul(i , j);
	}
	else if(f == '/')
	{
		x = div(i , j);
	}
	printf("%d" ,x);
	return 0;
}
