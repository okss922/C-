/*#include<stdio.h>
int main()
{
	char a[] = "abc";
	printf("%s\n" , a);                //输出是abc； 
	return 0;
}*/





/*#include<stdio.h>
int main()
{
	char a[] = {'a' , 'b' , 'c' , 0};     //补0是为了防止输出其他地东西。 
	printf("%s\n" , a);      //输出是abc 
	printf("%c" , a[1]);     //输出是b 
	return 0;
} */

#include<stdio.h>
int main()
{
	char a[] = "abc";
	char b[] = {'a' , 'b' , 'c'};
	char c[] = { 'a' , 'b' , 'c' ,0};
	printf("%d\n" , strlen(a));
	printf("%d\n" , strlen(b));
	printf("%d\n" , strlen(c));
	return 0 ;
} 
