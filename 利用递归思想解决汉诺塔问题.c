/*#include<stdio.h>
void hnt(int n , char x , char y , char z)
{
	if(n == 0)
	{
		return ;
	}
	else
	{
		hnt(n - 1, x , z , y);
		printf("%c ����>%c\n" , x , z);
		hnt(n - 1 , y , x , z);
	}
}
int main()
{
	char x , y , z;
	int n = 0;
	scanf("%d" , &n);
	hnt(n , 'x' , 'y' , 'z');
	return 0;
	
}*/
#include <stdio.h>
int bz = 1;                                //����ȫ�ֱ����������ǵڼ������衣 
void yd(int N, char k, char e)             //��ӡ��ʾ�����Ķ��塣����N��ʾ�ǵڼ�����飬����k��ʾ���һ��ʼ�����ڵ�λ�ã�����e��ʾ�������Ҫȥ�ĵط� 
{
    printf ("���裺%d ���� %d������ %c �� %c\n", bz++ , N , k , e);    //Ҫ��ӡ�����ݡ� 
}
 
void hnt(int n, char A, char B, char C)     //��ŵ������ĺ������� 
{
    if (n == 0)                              //����������0����ô���Ƿ���0�� 
        return;
    hnt(n - 1 , A , C , B);                  // ���ֵ��ǵ�һ��A��������Ķ�����ͨ��C���ӷŵ�B�������档 
	yd(n , A , C);                           //��������ĺ�������ӡ�ƶ�������� ���е�A ��C�����İ�A�����ϵĶ����ŵ�C������ȥ�������˵ڶ��� 
    hnt(n - 1 , B , A , C);                    //���ֵĵ�������������A���ӽ�B��������Ķ����ŵ�C������ȥ�� 
}
 
int main()
{
    int n = 0;           //�������Ķ��� 
    scanf ("%d", &n);      
    hnt(n, 'A', 'B', 'C');    //���ú��� 
    return 0;
}
