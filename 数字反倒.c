#include<stdio.h>
int main()
{
	int a , b , c , s , S;
	printf("������һ����λ����\n"); 
	scanf("%d" ,&s);
	a = s / 100;
	b = (s % 100) /10;
	c = s % 10;
	S = a + b * 10 + c * 100;
	printf("%d����֮�����Ϊ%d" , s , S);
	
	return 0;
 } 
