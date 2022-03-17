#include<stdio.h>
void main()
{
	int i=0,factorial,n;
	printf("Enter value");
	scanf("%d",&n);
	factorial=n;
	while(i<=n)
	{
		factorial=factorial*(n-1);
		n=n-1;
		i=i+1;	
	}
	printf("%d",factorial);
}
