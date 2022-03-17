#include<stdio.h>
void main()
{
	int i=1,a,b,x;
	printf("Enter base");
	scanf("%d",&a);
	printf("Enter power");
	scanf("%d",&b);
	x=a;
	while(i<b)
	{
		x=x*a;
		i=i+1;
	}
	printf("%d",x);
}
