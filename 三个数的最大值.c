/*  #include<stdio.h>
int main()
{
	int a , b , c;
	printf("����������ֵ��\n");
	scanf("%d %d %d" , &a , &b , &c);
	if(a > b)
	  if( a > c)
	  printf("���ֵΪ%d.\n" , a);
	  else
	  printf("���ֵΪ%d.\n" , c);
	else
	  if( b > c)
	  printf("���ֵΪ%d.\n" , b);
	  else
	  printf("���ֵΪ%d.\n" , c);
	return 0 ;
 }     */ 
 #include<stdio.h>
 int main()
 {
 	int a , b , c , max;
 	printf("��������������\n");
 	scanf("%d %d %d" , &a ,&b ,&c);
 	max = a;
 	if(b > max)
 	max = b;
 	if(c > max)
 	max = c;
 	printf("���ֵΪ%d��\n" , max);
 	return 0;
  } 
 
