#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the sieds of the triangle");
	scanf("%d%d%d",&a,&b,&c);
	if(a>0&&b>0&&c>0&&a+b>c&&b+c>a&&a+b>c)
	{
		if(a==b&&b==c&&c==a)
	{
		printf("equilateral triangle");
	}
	else if(a==b||a==c||b==c)
	{
		printf("isoselles");
	}
	else
	{
		printf("scallen triangle");
	}
	}
	else
	{
		printf("Not a triangle");
	}
}
