#include<stdio.h>
void main()
{
	int i=0,n,EC=0,OC=0;
	printf("Enter value");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			EC=EC+i;
			i=i+1;
		}
		else
		{
			OC=OC+i;
			i=i+1;
		}
	}
	printf("Even sum is %d\nOdd sum is %d",EC,OC);
}
