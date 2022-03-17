#include<stdio.h>
void main()
{
	int i=1,n,oc=0;
	printf("Enter value");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==1)
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

