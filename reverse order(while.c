#include<stdio.h>
void main()
{
	int n,di,sum=0;
	printf("Enter the value");
	scanf("%d",&n);
	while(n>0)
	{
		di=n%10;
		sum=sum*10+di;
		n=n/10;
	}
	printf("The reverse order is %d",sum);
}
