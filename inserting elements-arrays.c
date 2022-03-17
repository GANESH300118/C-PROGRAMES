#include<stdio.h>
void main()
{
	int a[10],n,i,j,x,p;
	printf("Enter size of a\n");
	scanf("%d",&n);
	printf("Elements of a\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements to be inserted\n");
	scanf("%d",&x);
	printf("Enter position to inserted\n");
	scanf("%d",&p);
	for(j=n+1;j>p;j--)
	{
		a[j]=a[j-1];
	}
	a[p]=x;
	printf("Elements after inserting are\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\n",a[i]);
	}
}
