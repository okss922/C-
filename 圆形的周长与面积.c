#include<stdio.h>
int main()
{
	float r = 0.0;
	float pi = 3.14;
	float S = 0.0;
	float C = 0.0;
	scanf("%f" , &r);
	C = 2 * pi * r;
	S = pi * r * r;
	printf("Բ�ε������%.2f,Բ�ε��ܳ���%.2f��\n" , S , C);
	return 0;
}
