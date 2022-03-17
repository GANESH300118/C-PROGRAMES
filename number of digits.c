#include<stdio.h>
void main()
{
	int n,di;
	printf("Enter value");
	scanf("%d",&n);
	while(n>0)
	{
		di=n%10;
		n=n/10;
		printf("%d\n",di);
	}
}
