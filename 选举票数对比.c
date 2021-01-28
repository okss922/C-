/*#include<stdio.h>
int main()
{
	char a[9] = {0};
	int i = 0;
	int A = 0;
	int B = 0;
	while(i < 9)
	{
		scanf("%c" , &a[i]);
		i++;
	}
	for(i=0 ; i<=9 ; i++)
	{
		if(a[i] == 'A')
		{
			A++;
		}else if(a[i] == 'B')
		{
			B++;
		}else if(a[i] == '0')
		{
			break;
		}
	}
	if(A > B)
	{
		printf("A");
	}else
	{
		printf("B");
	}
	return 0;
}*/
#include <stdio.h>
int main()
{
	char arr[100] = {0};
	int ch = 0;
	int flag = 0;
	while(((ch=getchar()) != '0') && ch != EOF)
	{
		if(ch == 'A')
		{
			flag++;
		}
		else if(ch == 'B')
		{
			flag--;
		}
	}
	if(flag>0)
	{
		printf("A");
	}
	else if(flag<0)
	{
	
		printf("B");
	}
	else
	{
		printf("E");
	}
	return 0; 
}


























