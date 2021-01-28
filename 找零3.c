#include<stdio.h>
int main()
{
	int qian , jia ; 
	printf("请输入您所支付的金额和物品价格。\n");
	scanf("%d %d" , &qian , &jia);
	if(qian > jia){
		printf("找您%d元。\n" , qian - jia);
	}else{
		printf("您的钱不够。\n");
	}
	return 0;
 } 
