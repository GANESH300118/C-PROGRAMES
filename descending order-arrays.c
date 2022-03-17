#include<stdio.h>
void main()
{
	int a[10],n,i,x,j;
	printf("Enter size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				x=a[j];
				a[j]=a[i];
				a[i]=x;
			}
		}
	}
	printf("Descending order is");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
