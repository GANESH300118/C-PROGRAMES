#include<stdio.h>
void main()
{
	float a,b,sum,product,difference,division;
	printf("Enter the values");
	scanf("%f%f",&a,&b);
	sum=(a+b);
	product=(a*b);
	difference=(a-b);
	division=(a/b);
	printf("The sum, product, difference, division, of the numbers is %f%f%f%f",sum,product,difference,division);
}
