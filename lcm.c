#include<stdio.h>
void main()
{
	int n,x,max,l;
	printf("Enter two numbers");
	scanf("%d%d",&n,&x);
	if(n>x)
	max=n;
	else
	max=x;
	while(1)
	{
		if(max%n==0&&max%x==0)
		{
			l=max;
			break;
		}
		else
		max++;
	}
	printf("lcm=%d",max);
}
