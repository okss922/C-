#include<stdio.h>
int main()
{
	int a , b ,t , m , n;
	printf("��������������\n");
	scanf("%d %d" , &a , &b);
	m = a;
	n = b; 
	while( b != 0)
	{
		t = a % b;
		a = b;
		b = t;
	}
	printf("%d��%d�����Լ����%d\n" , m , n ,a );
	return 0;
 } 
