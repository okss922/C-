#include<stdio.h>
int main()
{
	int i = 0;                    //����ѭ���ı����� 
	int c[100] = {0};             //����Ķ��塣 
	int a = 0;                     //�����м������ֵı������ٿ��������뵽����֮�С� 
	int b= 0;                     //����Ҫ��������֡� 
	scanf("%d" , &a);               
	for(i = 0 ; i < a;i++)
	{
		scanf("%d " , &c[i]);          //�����������ֵķ����� 
	}
	scanf("%d" , &b);
	for(i = a-1 ; i >= 0;i--)
	{
		if(c[i] > b)
	{
		c[i + 1] = c[i];
	}else
	{
		c[i+1] = b;
		break;
	}
	}
	if(i == -1)
	{
		c[0] = b;
	} 
	for(i = 0 ; i <= a ; i++)
	{
		printf("%d " , c[i]);
	}
	return 0;
} 
