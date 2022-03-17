#include<stdio.h>
void main()
{
	int a;
	printf("Enter your grade");
	scanf("%d",&a);
	if(a>=90)
	printf("O");
	else if(a>=80&&a<=89)
	printf("A+");
	else if(a>=70&&a<=79)
	printf("A");
	else if(a>=60&&a<=69)
	printf("B+");
	else if(a>=50&&a<=59)
	printf("B");
	else if(a>=40&&a<=49)
	printf("C");
	else 
	printf("FAIL");
}
