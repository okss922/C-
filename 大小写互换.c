#include<stdio.h>
int main()
{
	int ch = 0;
	while((ch = getchar()) !=EOF){
		if(ch >='a' && ch <='z'){
			printf("%c\n" , ch-32);  //putchar(ch-32)Ҳ�ǿ��ԡ�֮��ͬ�� 
		}else if(ch >='A' && ch <= 'Z'){
			printf("%c\n" , ch + 32);
		}
	}
	return 0;
}
