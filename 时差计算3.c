#include<stdio.h>
int main()
{
	int m1 , h1 , m2 , h2 , cm , ch , t;
	printf("�������һ��ʱ�䡣\n");
	scanf("%d %d" , &h1 , &m1);
	printf("������ڶ���ʱ�䡣\n");
	scanf("%d %d" , &h2 , &m2);
	if(h1 < h2){
		t = h1;
		h1 = h2;
		h2 = t;
		t = m1;
		m1 = m2;
		m2 = t; 
	}
	ch = h1 - h2;
	cm = m1 - m2;
	if(cm < 0){
		cm = cm + 60;
		ch = ch - 1;
	}
	printf("����ʱ��Ĳ�Ϊ%dʱ%d�֡�" , ch , cm);
	return 0;
 } 
