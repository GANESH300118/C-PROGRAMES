#include<stdio.h>
void main()
{
	int i=1,n,j=1;
	printf("Enter value");
	scanf("%d",&n);
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			printf("*\t");
			j=j+1;
		}
		printf("\n");
		i=i+1;
	}
}
