#include<stdio.h>
void main()
{
	int n,sum=0;
	printf("Enter value");
	while(1)
	{
		scanf("%d",&n);
		if(n<0)
		break;
		if(n==0)
		continue;
		if(n>0)
		sum=sum+n;
    }
	printf("%d",sum);
}
