#include<stdio.h>
void main()
{
	int i=1,sum=0,n;
	printf("Enter the value");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
			i=i+1;
		}
		else
		{
			i=i+1;
		}
	}
	if(n==sum)
	printf("It is a perfect number");
	else
	printf("It is not a perfect number");
}
