#include<stdio.h>
void main()
{
	int n,i,factorial;
	printf("Enter value");
	scanf("%d",&n);
	factorial=n;
	for(i=0;i<=n;i=i+1)
	{
		factorial=factorial*(n-1);
		n=n-1;
	}
	printf("%d",factorial);
}
