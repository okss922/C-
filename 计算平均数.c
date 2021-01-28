/*#include<stdio.h>
int main()
{
	float a[4] = {0};
	int i = 0;
	while(i <= 4)
	{
		scanf("%f" , &a[i]);
		i++;
	}
	printf("%.2f" , (a[1] + a[2] + a[3] + a[4] + a[0])/5);
	return 0;
 } 
 */
 
 
 #include<stdio.h>
int main()
{
	float a[4] = {0};
	int i = 0;
	float sum = 0.0;
	while(i <= 4)
	{
		scanf("%f" , &a[i]);
		sum = sum +a[i];
		i++;
	}
	printf("%.2f" , sum/5.0);
	return 0;
 } 
