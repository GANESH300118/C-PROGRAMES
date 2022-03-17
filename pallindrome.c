#include<stdio.h>
void main()
{
	int n,x,di,sum=0;
	printf("Enter the value");
	scanf("%d",&n);
	x=n;
	while(n>0)
	{
		di=n%10;
		sum=sum*10+di;
		n=n/10;
	}
	if(sum==x)
	{
		printf("It is a pallindrome");
	}
	else
	{
		printf("It is not a pallindrome");
	}
}
