#include<stdio.h>
struct book       //������һ���ṹ�� 
{
	char name[20];
	int price;
	int place;
}; 
int main()
{
	struct book b1 = {"c���Գ������" , 55 , 162};    //���ýṹ�崴����һ�������� 
	struct book b2 ={"�ߵ���ѧ" , 45 , 001};
	struct book *pb = &b1;                  //�ṹ��ָ������Ķ��塣 
	printf("%s\n" , (*pb).name);           //�ṹ��ָ�������ʹ�� ��
	printf("%s\n" , pb->name);            //ָ������������ýṹ�塣         . ����������������ڽṹ����Ѱ�ҳ�Ա�� 
	printf("%s\n" , b1.name);
	printf("%d\n" , b1.price);
	printf("%d\n" , b1.place);
	printf("%s\n" , b2.name);
	printf("%d\n" , b2.price);
	printf("%d" , b2.place);
	return 0;
}



