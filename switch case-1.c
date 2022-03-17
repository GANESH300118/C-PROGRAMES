#include<stdio.h>
void main()
{
	char ch;
	printf("Enter your operator");
	scanf("%c",&ch);
	int a,b;
	printf("Enter values");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case'+':printf("addition=%d",a+b);
		break;
		case'-':printf("subtraction=%d",a-b);
		break;
		case'*':printf("multiplication=%d",a*b);
		break;
		case'/':printf("division=%d",a/b);
		break;
		default:printf("Wrong choice");
	}
}
