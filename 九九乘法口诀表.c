#include<stdio.h>
int main()
{
	int i = 1;
	int j = 1;
	for(i = 1 ; i <= 9 ; i++)
	{
		for(j = 1 ; j <= i ; j++)
		{
			printf("%d * %d = %-4d" , i , j , i * j);  // -4 表示左对齐，占4位 
		}
		printf("\n");
	}
	return 0;
} 
