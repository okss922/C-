/*#include<stdio.h>
int main()
{
	printf("v   v\n");
	printf(" v v\n");
	printf("  v\n");
	return 0;
} 
*/



/*#include<stdio.h>
int main()
{
	printf("v   v\n v v\n  v\n");  // 上下两种都可以表示相同的内容。 
	return 0;
}*/ 





#include<stdio.h>
char a(char j)
{
	scanf("%c" , &j);
	printf("%c   %c\n" , j , j);
	printf(" %c %c\n" , j ,j);
	printf("  %c\n" ,j);       //定义函数的运用 
	return 0;
}
int main()
{
	char j;
	a(j);
	return 0;
} 

























