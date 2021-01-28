/*#include<stdio.h>
int main() 
{
	int i = 0;
	int j = 0;
	int n = 0;
	char a[15] = {'W' , 'e' , 'l' , 'c' , 'o' ,'m' , 'e' , ' ' , 't' ,'o' , ' ' , 'b' , 'i' , 't' ,'!'};
	char b[15] = {'#' , '#' , '#' , '#' , '#' ,'#' , '#' , '#' , '#' ,'#' , '#' , '#' , '#' , '#' ,'#'};              //单向输出 
	for(i = 0;i<15;i++)
	{
		for(n = 0;n<=i;n++)
		{
			printf("%c" ,a[n]);
		}
		for(j = i+1;j<15;j++)
		{
			printf("%c" , b[j]);
		}
		printf("\n");
	}
	return 0;
}*/
#include<stdio.h>
int main()
{
	int i = 0;
	char a[] = "welcome to bit!";
	char b[] = "###############";
	//int j  = sizeof(a)/sizeof(a[0]) -2      //用于确定整个字符串的大小。因为\0的存在所以要-2 
	int j = strlen(a) - 1; 
	while(i <= j)                            //双向输出。 
	{
		b[i] = a[i];
		b[j] = a[j];
		printf("%s\n" , b);
		i++;
		j--;
	}
	return 0;
} 
