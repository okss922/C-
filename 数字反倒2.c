			#include<stdio.h>
			int main()
			{
				int a = 0;
				int b = 0;
				int s = 0;
				scanf("%d" , &a);
				while(a > 0){
					b = a % 10;            //������������Ĳ������7000.ǰ�����Ϊ7���������Ϊ0007. 
					s = s * 10 + b;
					b = 0;
					a = a / 10;
				}
				printf("%d" , s);
				return 0;
			 }          
			 
			 
			 
/*#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d" ,&a);
	while( a > 0)
	{
		printf("%d" , a%10);        //�Ż� 
		a = a/10;
	}
	return 0;
} */ 
