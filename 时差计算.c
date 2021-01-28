#include<stdio.h>
int main()
{
	int h1 , m1 , h2 , m2 , t;         //程序是为了计算两个时间之间的差值。h1和m1分别表示第一个时间的小时和分钟。h2和m2也是如此。 
	printf("请输入第一个时间\n");
	scanf("%d %d" , &h1 , &m1);    //输入第一个时间的小时和分钟 
	printf("请输如第二个时间\n");
	scanf("%d %d" , &h2 , &m2);     //输入第二个时间的小时和分钟 
	t = (h1 * 60 + m1) - (h2 * 60 + m2);   //计算两个时间的差值 
	printf("时间差为%d分。" , t);
	return 0;
 } 
