#include<stdio.h>
int main()
{
	int qian , jia ; 
	printf("����������֧���Ľ�����Ʒ�۸�\n");
	scanf("%d %d" , &qian , &jia);
	if(qian > jia){
		printf("����%dԪ��\n" , qian - jia);
	}else{
		printf("����Ǯ������\n");
	}
	return 0;
 } 
