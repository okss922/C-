/*#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int t = 0;
	int n = 0;
	int a[50] = {0};
	scanf("%d" , &n);
	while(i < n)
	{
		scanf("%d" , &a[i]); 
		i++;
	}
	do
	{
		for( i = 0 ; i < n - j - 1 ; i++)
		{
			if(a[i] < a[i+1])
			{
				t = a[i];
				a[i] = a[i+1];
				a[i+1] = t;
			}
		}
		j++;
	}while(j < n);
	printf("%d %d %d %d %d" , a[0] , a[1] , a[2] , a[3] , a[4] );
	return 0;
}*/
#include<stdio.h>
int cmp(const void*e1 , const void*e2)
{
	return*(int*)e1 - *(int*)e2;
} 
int main()
{
	int n = 0;
	int a[50] = {0};
	scanf("%d" , &n);
	int i = 0;
	for(i = 0;i < n ; i++)
	{
		scanf("%d" , &a[i]);
	}
	int j = 0;
	qsort(a , n ,sizeof(a[0]) , cmp);   //������qsort(1 , 2 , 3 , 4) 1:���λ����Ҫ��������飻 2��������ĸ�����3���ǵ������麯����ռ�õ��ֽڣ�4���ȽϺ�������Ҫ�Լ����塣 
	for(i = 0 ;i < 5 ; i++)
	{
		printf("%d " , a[--n]);
		
	}
	return 0;
}
