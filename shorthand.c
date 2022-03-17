#include<stdio.h>
void main()
{
	float a,b,c,d;
	printf("Enter the values");
	scanf("%f%f%f",&a,&b,&c);
	a+=b*c;
	b-=c*a;
	c*=b-a;
	d/=a*b;
	printf("The answer to %f",a);
	printf("\nThe answer to %f",b);
	printf("\nThe answer to %f",c);
	printf("\nThe answer to %f",d);
}
