#include<stdio.h>
int main()
{
	int t1 , t , t2 , a , b , T , A , B;
	printf("������ʱ���һ��ʱ�䡣\n");
	scanf("%d %d" , &t1 , &t);
	a = t1 / 100;
	b = t1 % 100;
	T = a * 60 + b;
	t2 = T + t;
	A = t2 / 60;
	B = t2 % 60;
	printf("��%d����֮���ʱ����%dʱ%d�֡�\n" , t , A , B);
	return 0;
 } 
