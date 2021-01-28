/*#include<stdio.h>
int main()
{
	int i = 9;
	int j = 0;
	int a[10] = {6,8,9,10,11,12,13,17,18,19};
	int n = 0;
	int m = 0;
	scanf("%d" , &n);
	do
	{
		m =(i + j)/2;
		if(n == a[(i + j)/2])
		{
			break;
		}
		else if(n > a[(i + j)/2])
		{
			j = m + 1;
		}
		else if(n < a[(i + j)/2])
		{
			i = m - 1;
		}
	}while(1);
	printf("%d" , m + 1);
	return 0;
}*/
#include<stdio.h>
int cz(int a[] , int k,int gs)
{
	int i = 0;
	int j =gs - 1;
	int m = 0;
	do
	{
		m =(i + j)/2;
		if(k == a[m])
		{
			return m +1;
			break;
		}
		else if(k > a[m])
		{
			i = m + 1;
		}
		else if(k < a[m])
		{
			j = m - 1;
		}
	}while(1);
} 
int main()
{
	int a[10] = {6,8,9,10,11,12,13,17,18,19};
	int k = 0;
	int m = 0;
	int gs = 0;
	gs =sizeof(a)/sizeof(int);
	scanf("%d" , &k);
	m = cz(a,k,gs);
	printf("%d" , m);
	return 0;
}
