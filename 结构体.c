#include<stdio.h>
struct book       //创建了一个结构体 
{
	char name[20];
	int price;
	int place;
}; 
int main()
{
	struct book b1 = {"c语言程序设计" , 55 , 162};    //利用结构体创建了一个变量。 
	struct book b2 ={"高等数学" , 45 , 001};
	struct book *pb = &b1;                  //结构体指针变量的定义。 
	printf("%s\n" , (*pb).name);           //结构体指针变量的使用 。
	printf("%s\n" , pb->name);            //指针变量快速引用结构体。         . ：点操作符，运用于结构体中寻找成员。 
	printf("%s\n" , b1.name);
	printf("%d\n" , b1.price);
	printf("%d\n" , b1.place);
	printf("%s\n" , b2.name);
	printf("%d\n" , b2.price);
	printf("%d" , b2.place);
	return 0;
}



