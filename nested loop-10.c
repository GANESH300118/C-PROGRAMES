#include<stdio.h>
#include<math.h>
void main()
{
	int z,t,n,c=0,sum=0,product,m;
	printf("Enter value");
	scanf("%d",&n);
	m=n;
	z=n;
	while(n>0)
	{
		n=n/10;
		c=c+1;
	}
	while(m>0)
	{
		t=m%10;
		m=m/10;
		product=pow(t,c);
		sum=sum+product;
	}
	if(sum==z)
	{
		printf("It is a amrstrong number");
	}
	else
	{
		printf("It is not a amrstrong number");
	}
}
