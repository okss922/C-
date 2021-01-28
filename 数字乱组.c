#include<stdio.h>
int main()
{
	int a , b , i , j , k ;
	printf("请输入一个数字。\n");
	scanf("%d" , &a);
	b=0;
	i = a;
	while(i <= a +3){
		j = a;
		while(j <= a + 3){
			k = a;
			while(k <= a +3){
				if(k!=i && j!=i && j!=k){
					b++;
					printf("%d%d%d" , i , j , k);
					if(b = 6){
						printf("\n");
					}else{
						printf(" ");
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return 0;
 } 
