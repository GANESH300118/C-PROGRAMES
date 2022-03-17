#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter value");
	scanf("%d",&n);
	i=n;
	while(i<=n&&i>0)
	{
		if(i%2==1)
		{
			printf("\n%d",i);
			i=i-1;
		}
		else
		{
			i=i-1;
		}
	}
}
