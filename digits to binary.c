#include<stdio.h>
void main()
{
	int a,x;
	printf("Enter value");
	scanf("%d",&a);
	while(a>0)
	{
		x=a%2;
		printf("%d\n",x);
		a=a/2;
	}
}
