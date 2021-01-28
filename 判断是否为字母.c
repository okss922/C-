/*#include<stdio.h>
int main()
{
    char a;
    scanf("%c" , &a);
    if(a <= 'Z' && a >= 'A' || a <= 'z' && a >= 'a'){
        printf("YES\n");
        
    }else{
        printf("No");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
	int ch = 0;
	while(ch = getchar())
	{
		if(ch <= 'Z' && ch >= 'A' || ch <= 'z' && ch >= 'a'){
        printf("YES\n");
    }else
	{
        printf("No");
    }
    getchar();
	}
 } 
