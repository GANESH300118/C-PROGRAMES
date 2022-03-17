#include<stdio.h>
void main()
{
	int a,b;
	printf("enter 2 value");
	scanf("%d%d",&a,&b);
	a=b++;
	printf("postincrement is %d,%d",a,b);
	a=++b;
	printf("\npreincrement is %d,%d",a,b);
}
