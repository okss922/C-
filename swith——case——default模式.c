#include<stdio.h>
int main()
{
	int type;
	printf("���������֡�");
	scanf("%d" , &type);
	switch(type)
	{
		case 1:                                   //switch() --case --default�����á�case֮���ÿһ�����̶���Ҫbreak; 
			printf("���Ϻã�");                   //���������ڵ���������̵������ 
			break;
		case 2:
			printf("����ã�");
			break;
		case 3:
			printf("���Ϻã�");
			break;
		default :
			printf("����������ֲ��ڷ�Χ�ڡ�");
			break; 
	} 
	return 0 ;
}
