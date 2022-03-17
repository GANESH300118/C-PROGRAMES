#include<stdio.h>
void main()
{
	int a,b;
	printf("enter 2 values");
	scanf("%d%d",&a,&b);
	printf("The value of a&b is %d",a&b);
	printf("\nThe value of a|b is %d",a|b);
	printf("\nThe value of a^b is %d",a^b);
	printf("\nThe value of a<<2 is %d",a<<2);
	printf("\nThe value of a>>3 is %d",a>>3);
}
