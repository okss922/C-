#include <stdio.h>
 
 
int main()
{
    int ch = 0;
    while((ch=getchar()) != EOF)
    {
        if(isalpha(ch))
            printf("YES\n");
        else
            printf("NO\n");
        getchar();
    }     
    return 0;
}

