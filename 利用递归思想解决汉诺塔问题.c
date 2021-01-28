/*#include<stdio.h>
void hnt(int n , char x , char y , char z)
{
	if(n == 0)
	{
		return ;
	}
	else
	{
		hnt(n - 1, x , z , y);
		printf("%c ——>%c\n" , x , z);
		hnt(n - 1 , y , x , z);
	}
}
int main()
{
	char x , y , z;
	int n = 0;
	scanf("%d" , &n);
	hnt(n , 'x' , 'y' , 'z');
	return 0;
	
}*/
#include <stdio.h>
int bz = 1;                                //利用全局变量，计算是第几个步骤。 
void yd(int N, char k, char e)             //打印显示函数的定义。变量N表示是第几个物块，变量k表示物块一开始所处在的位置，变量e表示的是物块要去的地方 
{
    printf ("步骤：%d ：第 %d个物块从 %c 到 %c\n", bz++ , N , k , e);    //要打印的内容。 
}
 
void hnt(int n, char A, char B, char C)     //汉诺塔解决的函数体现 
{
    if (n == 0)                              //如果输入的是0，那么就是返回0； 
        return;
    hnt(n - 1 , A , C , B);                  // 体现的是第一步A杆子上面的东西，通过C杆子放到B杆子上面。 
	yd(n , A , C);                           //利用上面的函数来打印移动的情况。 其中的A 和C表明的把A杆子上的东西放到C杆子上去，体现了第二步 
    hnt(n - 1 , B , A , C);                    //体现的第三部步，利用A杆子将B杆子上面的东西放到C杆子上去。 
}
 
int main()
{
    int n = 0;           //定义物块的多少 
    scanf ("%d", &n);      
    hnt(n, 'A', 'B', 'C');    //套用函数 
    return 0;
}
