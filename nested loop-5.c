#include<stdio.h>
void main()
{
	int i,n,j,x;
	printf("Enter value");
	scanf("%d",&n);
	x=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",x);
			x=x+1;
		}
		printf("\n");
	}
}
