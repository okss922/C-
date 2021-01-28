#include<stdio.h>
int main()
{
	printf("1234\t1234\t123456\n");                    //水平制表：会自动对其其中的数字 
	printf("1\t23\t259654\n"); 
	printf("\041\n");                                   //转义字符“\ddd”其中的d都是八进制数字，打印出来就是八进制变成十进制数字 ,并以十进制数字所代表的ascii码值输出 
	printf("\x30");                                   //同上一个,\xhh;表示十六进制，其中hh是十六进制的大小。输出也是ascii。 
	return 0;
} 
