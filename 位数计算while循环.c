#include<stdio.h>
int main()
{
	printf("���������֡�\n");
	int a , t;
	scanf("%d" , &a);
	t++;
	a = a/10; 
	while(a > 0){
		a = a / 10;
		t++;
	}
	printf("�������������%dλ����\n" , t);
	return 0;
}
