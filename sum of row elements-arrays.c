#include<stdio,h>
void main()
{
	int a[10][10],ij,m,n,sum;
	printf("Enter size of a");
	scanf("%d%d",&m,&n);
	printf("Enter elements to a");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix a is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
		printf("The sum of row is %d\n",i+1,sum);
	}
}
