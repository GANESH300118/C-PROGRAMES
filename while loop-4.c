#include<stdio.h>
void main()
{
	int i=0,n;
	printf("Enter value");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
		printf("\n%d",i);
		i=i+2;
		}
	}
}
