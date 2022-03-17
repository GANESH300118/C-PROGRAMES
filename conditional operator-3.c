#include<stdio.h>
void main()
{
	int a;
	printf("enter value");
	scanf("%d",&a);
	(a>0)?printf("positive number,a"):(("a==0")?printf("a is zero"):printf("negative number,a"));
}
