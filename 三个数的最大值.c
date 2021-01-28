/*  #include<stdio.h>
int main()
{
	int a , b , c;
	printf("请输入三个值。\n");
	scanf("%d %d %d" , &a , &b , &c);
	if(a > b)
	  if( a > c)
	  printf("最大值为%d.\n" , a);
	  else
	  printf("最大值为%d.\n" , c);
	else
	  if( b > c)
	  printf("最大值为%d.\n" , b);
	  else
	  printf("最大值为%d.\n" , c);
	return 0 ;
 }     */ 
 #include<stdio.h>
 int main()
 {
 	int a , b , c , max;
 	printf("请输入三个数。\n");
 	scanf("%d %d %d" , &a ,&b ,&c);
 	max = a;
 	if(b > max)
 	max = b;
 	if(c > max)
 	max = c;
 	printf("最大值为%d。\n" , max);
 	return 0;
  } 
 
