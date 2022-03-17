#include<stdio.h>
void main()
{
	int i=0,sum=0,n;
	printf("Enter value");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+(i*i);
		i=i+1;
	}
	printf("%d",sum);
}
