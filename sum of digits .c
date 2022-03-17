#include<stdio.h>
void main()
{
	int n,di,sum=0;
	printf("Enter value");
	scanf("%d",&n);
	while(n>0)
	{
		di=n%10;
		sum+=di;
		n=n/10;
	}
	printf("Sum of the digits of the given number is %d",sum);
}
