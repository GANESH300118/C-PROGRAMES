#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("Enter 4 values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	printf("%d is the maximum",a);
	else if(b>a&&b>c&&b>d)
	printf("%d is the maximum",b);
	else if(c>a&&c>b&&c>d)
	printf("%d is the maiximum",c);
	else
	printf("%d is the maximum",d);
}
