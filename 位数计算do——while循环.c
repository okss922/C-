#include<stdio.h>
int main()
{
	int a , t;
	printf("���������֡�\n");
	scanf("%d" , &a);
	do{
		a = a / 10;
		t++;
		
	}while(a > 0);
	printf("�������������%dλ����\n" , t); 
	return 0;
}
