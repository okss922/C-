#include<stdio.h>
int main()
{
	int h1 , m1 , h2 , m2 , t1 , t2 , t;    // h1 , m1表示第一个时间。  h2 , m2也是如此。t代表分钟制的总时间差。t1表示总时间差的小时制，t2表示总时间的分钟制。 
	printf("请分别输入第一个时间的小时和分钟。\n");
	scanf("%d %d" , &h1 , &m1);
	printf("请分别输入第二个时间的小时和分钟。\n");
	scanf("%d %d" , &h2 , &m2);
	t = (h1 * 60 + m1) - (h2 * 60 + m2);
	t1 = t / 60;
	t2 = t % 60;
	printf("两个时间的相差%d时%d分。\n" , t1 , t2);
	return 0;
}
