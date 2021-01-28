			#include<stdio.h>
			int main()
			{
				int a = 0;
				int b = 0;
				int s = 0;
				scanf("%d" , &a);
				while(a > 0){
					b = a % 10;            //上下两个代码的差距在于7000.前者输出为7，后者输出为0007. 
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
		printf("%d" , a%10);        //优化 
		a = a/10;
	}
	return 0;
} */ 
