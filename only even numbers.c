#include<stdio.h>
void main()
{
	int i,n1,n2;
	printf("Enter lower bound");
	scanf("%d",&n1);
	printf("Enter upper bound");
	scanf("%d",&n2);
	i=n1;
	while(i>=n1&&i<=n2)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
			i=i+1;
		}
		else
		{
			i=i+1;
		}
	}
}
