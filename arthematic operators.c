#include<stdio.h>
void main()
{
	int a,b,sum,difference,product,division,modulo;
	printf("Enter 2 values");
	scanf("%d%d",&a,&b);
	sum=(a+b);
	difference=(a-b);
	product=(a*b);
	division=(a/b);
	modulo=(a%b);
	printf("The sum is %d",sum);
	printf("\nThe difference is %d",difference);
	printf("\nThe product is %d",product);
	printf("\nThe division answer is %d",division);
	printf("\nThe modulo is %d",modulo);
}
