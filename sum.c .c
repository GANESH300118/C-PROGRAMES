#include<stdio.h>
void main()
{
	int a,b,c,sum,average;
	printf("enter 3 values");
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	average=(a+b+c)/3;
	printf("The sum of the numbers is %d",sum);
	printf("\nThe average of the numbers is %d",average);
}
