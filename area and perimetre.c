#include<stdio.h>
void main()
{
	float r,area,perimeter;
	printf("Enter the radius");
	scanf("%f",&r);
	area=(3.14*r*r);
	perimeter=(3.14*2*r);
	printf("The area of the circle is %f",area);
	printf("\nThe perimeter of the circle is %f",perimeter);
}
