#include<stdio.h>
void main()
{
	float a,b,x,y,z;
	printf("Enter 2 values");
	scanf("%f%f",&a,&b);
	x=(a>b);
	y=(a>0);
	z=(b>0);
	printf("The greater among the 2 is %f",x);
	printf("\na is %f",y);
	printf("\nb is %f",z);
}
