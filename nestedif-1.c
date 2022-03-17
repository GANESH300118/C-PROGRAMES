#include<stdio.h>
void main()
{
	int a;
	printf("Enter the value");
	scanf("%d",&a);
	if(a>=0)
	{
		if(a==0)
		{
			printf("%d is zero",a);
		}
		else
		{
			printf("%d is a positive number",a);
		}
	}
	else
	{
		printf("%d is a negative number",a);
	}
}
