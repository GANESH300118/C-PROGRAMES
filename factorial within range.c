#include<stdio.h>
void main()
{
	int i=2,x,z=i,factorial,n;
	printf("Enter lower bound");
	scanf("%d",&n);
	printf("Enter upper bound");
	scanf("%d",&x);
	factorial=i;
	while(i<=x&&i>=n)
	{
		factorial=factorial*(z-1);
		z=z-1;
		i=i+1;	
	}
	printf("%d",factorial);
}
