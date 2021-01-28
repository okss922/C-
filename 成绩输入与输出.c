/*#include<stdio.h>
int main()
{
	int i = 0;
	int s[3] = {0};
	while(i < 3 )
	{
		scanf("%d" , &s[i]);
		i++;
	}
	printf("成绩1：%d 成绩2：%d 成绩3：%d" , s[0] , s[1] , s[2]);
	return 0;
 }*/
/*#include<stdio.h>
int main()
{
	int i =0;
	int s[3] ={0};
	do
	{
		scanf("%d" , &s[i]);
		i++;
	}while(i < 3);
	printf("成绩1：%d 成绩2：%d 成绩3：%d" , s[0] , s[1] , s[2]);
	return 0;
 }*/
#include<stdio.h>
int main()
{
	int i =0;
	int s[3] ={0};
	for(i = 0; i < 3 ; i++)
	{
		scanf("%d" , &s[i]);
	}
	printf("成绩1：%d 成绩2：%d 成绩3：%d" , s[0] , s[1] , s[2]);
	return 0;
}

	
	
	
	
