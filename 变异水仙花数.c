#include<stdio.h>
int main()
{
	int a = 0;           //用来保存输入的数字。 
	int b = 10;         //用来分离数字。 
	int c1 = 0;         //用来保存数字分离之后的数字 
	int c2 = 0;        //用来保存数字分离之后的数字 
	int sum = 0;      //用来计算分离之后的和。 
	scanf("%d" , &a);    //数字的输入 
	while(a>b)         //判断数字是否是两位数，因为很容易得知，小于10的数字一定不是变异水仙花数。运用循环 语句来计算所有分离之后的计算和 
	{
		c1 = a%b;                                         //数字分离 
		c2 = a/b;                                        //数字分离 
		sum = sum + c1 * c2;                             //计算分离之后所有数字的乘积和。 
		b = b * 10;                                      // 为下一次分离做准备。 
	}
	if(sum == a)                  //判断是否是变异水仙花数 
	{
		printf("YES");
	}else
	{
		printf("NO");
	}
	return 0;
}






/*#include<stdio.h>
int main()
{
	int i = 0;                  //用于循环的变量数 
	int j = 10;                //用于计算水仙花数的开始。 
	int a = 0;                //保存输入的位数 
	int b = 0;                //用于计算位数的最大数。也就是几个9. 
	int c = 10;               //用于分离数字的变量。 
	int c1 = 0;                   //保存分离之后的数字 
	int c2 = 0;                 //保存分离之后的数字 
	int sum = 0;                   //保存分离之后的所有的数字乘积和为之后判断是否是水仙花数做准备。 
	scanf("%d" , &a);              //输入位数。 
	for(i = 0;i < a;i++)           //用循环，算出这个位数上的最大数。 
	{
		b = b * 10 + 9;
	}
	for(j = 10 ; j <= b ; j++)       //运用循环分离出各个组合并进行乘积和的计算。 
	{
		while(j > c)                   //用来控制需要分离的次数。 
		{
			c1 = j % c;                //运用%号来分离出需要的组合 
			c2 = j / c;
			sum = sum + c1 * c2;      //计算总和。 
			c = c * 10; 
		}
		c = 10;                      //重置C方便之后的运算。 
		if(sum == j)                //判断是不是水仙花数，并输出。 
		{
			printf("%d\n" , j);
		}
		sum = 0;                    //总和的重置，为下一次的入准备 
	}
	return 0;
}*/ 
