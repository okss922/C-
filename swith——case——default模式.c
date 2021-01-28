#include<stdio.h>
int main()
{
	int type;
	printf("请输入数字。");
	scanf("%d" , &type);
	switch(type)
	{
		case 1:                                   //switch() --case --default的运用。case之后的每一个过程都需要break; 
			printf("早上好！");                   //可以运用于单条件多过程的情况。 
			break;
		case 2:
			printf("中午好！");
			break;
		case 3:
			printf("晚上好！");
			break;
		default :
			printf("您输入的数字不在范围内。");
			break; 
	} 
	return 0 ;
}
