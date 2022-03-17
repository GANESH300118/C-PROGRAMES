#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter value");
	scanf("%d",&n);
	while(i<=n&&i>0)
	{
		if(i%2==1)
		{
		printf("\n%d",i);
		i=i+1;
		}
	}
}
