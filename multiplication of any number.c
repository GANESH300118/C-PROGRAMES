#include<stdio.h>
void main()
{
	int i=1,n;
	printf("Enter value");
	scanf("%d",&n);
	while(i<=30)
	{
		printf("%dx%d=%d\n",n,i,n*i);
		i=i+1;
	}
}
