#include<stdio.h>
int main()
{
	float a = 0.0;
	float b = 0.0;
	float c = 0.0;
	float C = 0.0;
	float S = 0.0;
	float pi = 0.0;
	scanf("%f %f %f" , &a , &b , &c );
	C = a + b + c;
	pi = (a + b + c)/2.0;
	S = sqrt(pi*(pi-a)*(pi-b)*(pi-c));
	printf("�����ε������%.2f,�����ε��ܳ���%.2f.\n" , S ,C);
	return 0;
 } 
