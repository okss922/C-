/*#include<stdio.h>
int main()
{
	char a[] = "abc";
	printf("%s\n" , a);                //�����abc�� 
	return 0;
}*/





/*#include<stdio.h>
int main()
{
	char a[] = {'a' , 'b' , 'c' , 0};     //��0��Ϊ�˷�ֹ��������ض����� 
	printf("%s\n" , a);      //�����abc 
	printf("%c" , a[1]);     //�����b 
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
