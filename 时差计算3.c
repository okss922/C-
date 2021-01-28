#include<stdio.h>
int main()
{
	int m1 , h1 , m2 , h2 , cm , ch , t;
	printf("请输入第一个时间。\n");
	scanf("%d %d" , &h1 , &m1);
	printf("请输入第二个时间。\n");
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
	printf("两个时间的差为%d时%d分。" , ch , cm);
	return 0;
 } 
