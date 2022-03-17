#include<stdio.h>
int main()
{
	int a;
	printf("Enter value");
	scanf("%d",&a);
	if((a%5==0)&&(a%7==0))
	{
		printf("%d is divisible by both",a);
	}
	else
	{
		printf("%d is not divisible by both",a);
	}
}
