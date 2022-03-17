#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter values of the sides");
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&b==c&&c==a)
	{
		printf("It is equilateral triangle");
	}
	else
	{
		if(a==b||b==c||c==a)
		{
			printf("It is a isoceles triangle");
		}
		else
		{
			printf("It is a scalen triangle");
		}
		
	}
}
