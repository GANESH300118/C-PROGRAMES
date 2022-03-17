#include<stdio.h>
#include<stdio.h>
void main()
{
	int factorial,n,t,sum=0,z;
	printf("Enter value");
	scanf("%d",&n);
	z=n;
	while(n>0)
	{
		t=n%10;
		factorial=t;
		while(t>1)
		{
			factorial=factorial*(t-1);
			t=t-1;
		}
		sum+=factorial;
		n=n/10;
	}
	if(sum==z)
	printf("It is a strong number");
	else
	printf("It is not a strong number");
}
