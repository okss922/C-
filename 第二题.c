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
	printf("v   v\n v v\n  v\n");  // �������ֶ����Ա�ʾ��ͬ�����ݡ� 
	return 0;
}*/ 





#include<stdio.h>
char a(char j)
{
	scanf("%c" , &j);
	printf("%c   %c\n" , j , j);
	printf(" %c %c\n" , j ,j);
	printf("  %c\n" ,j);       //���庯�������� 
	return 0;
}
int main()
{
	char j;
	a(j);
	return 0;
} 

























