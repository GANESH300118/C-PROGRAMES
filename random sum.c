#include<stdio.h>
void main()
{
	int i,x,sum=0,n;
	printf("Enter how many numbers");
	scanf("%d",&n);
	for(i=1;i<=n;i=i+1)
	{
		scanf("%d",&x);
		sum=sum+x;
	}
	printf("The total is %d",sum);
}
