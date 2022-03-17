#include<stdio.h>
void main()
{
	int i=2,n2,n1,x;
	printf("Enter lower bound");
	scanf("%d",&n1);
	printf("Enter upper bound");
	scanf("%d",&n2);
	if(n1==0||n1==1)
	{
		x=1;
		while(x<n2)
		{
			x++;
			if(x>2&&x%i==0)
			continue;
			printf("%d\n",x);
		}
	}
	else
	{
		x=n1-1;
		while(x<n2)
		{
			x++;
		if(x>2&&x%i==0)
		continue;
		printf("%d\n",x);
		}
	}
}
