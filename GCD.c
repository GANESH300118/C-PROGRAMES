#include<stdio.h>
void main()
{
	int n,x,i=2,y;
	printf("Enter value");
	scanf("%d%d",&n,&x);
	while(i<=n&&i<=x)
	{
		if(n%i==0&&x%i==0)
		{
			y=i;
			i++;
		}
		else
		i++;
	}
	printf("GCD is %d",y);
}
