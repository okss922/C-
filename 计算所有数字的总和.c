#include<stdio.h>
int main()
{
	float sum = 0.0;
	int i = 0;
	int x = 0;
	float a = 0.0;
	scanf("%d" , &i);
	for(x = 0 ; x < i ; x++)
	{
		scanf("%f" , &a);
		sum = sum + a;
	}
	printf("������������ֵ��ܺ���%.2f,ƽ������%.2f\n" , sum ,sum / i);
	return 0;
}
