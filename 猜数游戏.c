#include<stdio.h>
#include<time.h>           //头文件服务于time（）函数 和srand()函数 
int main()
{
	int a , b , c ;                        //a是用来保存随机数的变量，b是用于保存用户输入的数字。c来计算用户输入了几次。 
	srand((unsigned int)time(NULL));    //为了保证每次数都不一样。 time前面的括号是用来强制转换类型的。unsigned：无符号数的定义。 
                                         //srand()可以让time函数输出的数字更加随机。利用的时间戳来作用的 。是现在的时间 —计算机起始的时间（1970.1.1.0：0：0）
	a = rand()%100 +1;          //rand函数输出随机数的范围是（ 0 ——32767].所以 %100来保证输出的数字是小于100的。 
	printf("已经想好一个数字，请你来猜一猜。\n");
	do                                      //运用循环来开始游戏 
	{
		scanf("%d" , &b);
		if(a == b){
			c++;  
		}else if(a > b){
			printf("您输入的数字太小了。\n");
			c++;
		}else{
			printf("您输入的数字太大了。\n");
			c++;
		}
	}while(a != b);                  //循环结束的条件。 
	printf("您猜对了！您一共猜了%d次。\n" , c);
	return 0;
}
