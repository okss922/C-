#include<stdio.h>
int main()
{
	printf("请输入您的身高英尺与英寸。\n");
	double chi;
	double cun;
	scanf("%lf %lf" , &chi , &cun );
	 printf("身高是%f米。\n", ((cun + chi / 12) * 0.3048));   //printf("您的身高是%f米。\n"((chi + cun / 12) * 0.3048));     printf("身高是%f米。\n", ((foot + inch / 12) * 0.3048))
	return 0; 
 } 
