#include<stdio.h>
/*int slen(char *str)
{
	int x = 0;
	while(*str != '\0')
	{
		x++;
		str++;
	}
	return x;
}*/

int slen(char *str)
{
	if(*str != '\0')
	{
		return 1 + slen(str + 1);    //�����˵ݹ��˼�롣 
	}
	else
	{
		return 0;
	}
} 
int main()
{
	char a[] = {0};
	scanf("%s" , &a);
	int m = slen(a);
	printf("�ַ����ĳ����ǣ�%d\n" , m);
	return 0;
}
