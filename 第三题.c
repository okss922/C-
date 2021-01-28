#include<stdio.h>
int main()
{
	printf("The size of short is %d bytes.\n" , sizeof(short));    //sizeof()给的是字节的大小 
	printf("The size of int is %d bytes.\n" , sizeof(int));
	printf("The size of long is %d bytes.\n" , sizeof(long));
	printf("The size of long long is %d bytes.\n" , sizeof(long long));
	return 0;
}
