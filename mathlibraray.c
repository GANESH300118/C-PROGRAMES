#include<stdio.h>
#include<math.h>
void main()
{
	int a,b;
	float y;
	printf("Enter value");
	scanf("%d%d",&a,&b);
	y=(a*(3.14/180));
	printf("sin(y) is %f",sin(y));
	printf("\ncos(y) id %f",cos(y));
	printf("\ntan(y) is %f",tan(y));
	printf("\nlog(a) is %f",log(a));
	printf("\nsqrt of %d is %f",a,sqrt(a));
	printf("\npower of %d,%d is %f",a,b,pow(a,b));
	printf("\nabsolute value of %d is %d",a,abs(a));
	printf("\nlog10(a) is %f",log10(a));
}
