#include<stdio.h>
void main()
{
	int a[10][10],i,j,m,n,sum=0;
	printf("Size of a");
	scanf("%d%d",&m&n);
	printf("Enter elements of a");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
	}
	printf("Matrix a is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The sum of all elements of a matrix are %d",sum);
}
