#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is bigger than %d and %d",a,c,b);
		}
		else
		{
			printf("%d is bigger than %d and %d",c,a,b);
		}
	}
	else
	{
		if(b>c)
		{
			printf("%d is bigger than %d and %d",b,c,a);
		}
		else
		{
			printf("%d is bigger than %d and %d",c,b,a);
		}
	}
}
