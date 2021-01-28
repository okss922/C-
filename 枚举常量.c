/*#include<stdio.h>
enum ys 
{
	red, 
	yellow, 
	blue,
};
int main()
{
	printf("%d\n" , red);
	printf("%d\n" , yellow);
	printf("%d\n" , blue);
	return 0;
}*/
#include<stdio.h>
enum ys
{
	yellow,
	red,
	blue,
};
int main()
{
	enum ys color = blue;
	printf("%d" , color);
	return 0;
}
