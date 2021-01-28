#include <stdio.h>
int main()
{
	int weight = 0;
	int height = 0;
	double bmi = 0.0;
	scanf("%d%d", &weight, &height);
	bmi = weight/((double)height*height/10000);
	printf("%.2lf\n", bmi);
	return 0; 
}
