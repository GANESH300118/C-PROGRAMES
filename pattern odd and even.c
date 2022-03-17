#include<stdio.h>
void main()
{
	int i=1,j=i,n;
	printf("Enter value");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n");
		if(i%2==0)
		{
			j=1;
			while(j<=n)
			{
				j=j+1;
				printf("$\t");
			}
		}
		else
		{
			j=1;
			while(j<=n)
			{
				j=j+1;
				printf("*\t");
			}
		}
		i=i+1;
	}
}
