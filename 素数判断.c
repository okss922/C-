/*#include<stdio.h>
int main()
{
	int a , b , c;
	printf("������һ������\n");
	scanf("%d" , &a);
	b = 2;
	c = 0;
	while(b < a)
	{
		if(a % b == 0){
			c = c + 1;
			break;
		}
		b++;
	}
	if( c != 0){
		printf("��������ֲ���������\n");
	}else{
		printf("�����������������\n");
	}
	return 0;
 }                          */
/* #include<stdio.h>
int main()
{
	int a , b , c ;
	printf("������һ�����֡�\n");
	scanf("%d" , &a);
	b = 2;
	c = 0; 
	do
	{
		if( a%b == 0)
		{
			c ++;
			break;
		}
		b ++;
	}while(b < a);
	if( c != 0)
		{
			printf("��������ֲ���������\n");
		}else
		{
			printf("�����������������\n");
		}
	return 0;
 }            */
 
#include<stdio.h>
int main()
{
	int a , b , c;
	printf("������һ�����֡�\n");
	scanf("%d" , &a);
	c = 0;
	for( b = 2 ; b < a ;b++)
	{
		if( a % b == 0)
		{
			c++;
			break; 
		}
	}
	if( c != 0)
		{
			printf("��������ֲ���������\n");
		}else
		{
			printf("�����������������\n");
		}
	return 0;
}
