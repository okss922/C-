#include<stdio.h>
int max(int a , int b)
{
	int c;
	if( a > b){
		c = a; 
	}else{
		c = b;
	}
	return c;
}
int main()
{
	int a , b;
	printf("�������������֡�\n");
	scanf("%d %d" , &a , &b);
	printf("�����������ֵΪ%d��\n" , max(a , b));
	return 0;
}
