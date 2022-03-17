#include<stdio.h>
int main()
{
	int a;
	printf("Enter value");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is a positive number",a);
	}
	if(a==0)
	{
		printf("%d is zero",a);
	}
	if(a<0)
	{
		printf("%d is a negative number",a);
	}
	return 0;
}
