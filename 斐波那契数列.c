#include<stdio.h>
int fb(int n)
{
	if(n <= 2)
	{
		return 1;
	}
	else
	{
		return fb(n-1) +fb(n-2);
	}
}
int main()
{
	int n = 0;
	scanf("%d" ,&n);
	int m = fb(n);
	printf("%d" , m);
	return 0;
}




/*#include<stdio.h>
int main()
{
	int a = 0;
	int t1 = 0;
	int t2 = 1;
	int t = 0;
	int m = 0;
	scanf("%d" , &a);
	while(m < a)
	{
		t = t1 + t2;
		t1 = t2;
		t2 = t;
		m++; 
		printf("%d " , t);
	}
	return 0;
}*/ 
