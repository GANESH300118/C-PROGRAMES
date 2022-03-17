#include<stdio.h>
void main()
{
	int a,b,*p1,*p2,c;
	printf("Enter first value\n");
	scanf("%d",&a);
	printf("Enter second value\n");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	c=(*p1+*p2);
	printf("%d\n",c);
	printf("%d",&c);
}
