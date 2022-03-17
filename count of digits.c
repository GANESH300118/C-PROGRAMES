#include<stdio.h>
void main()
{
	int n,di,c;
	printf("Enter value");
	scanf("%d",&n);
	while(n>0)
	{
		di=n%10;
		n=n/10;
		c=c+1;
	}
	printf("The number of digits in the given number is %d",c);
}
