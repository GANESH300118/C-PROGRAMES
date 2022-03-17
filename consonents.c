#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the charecter");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		ch=ch+32;
		printf("%c",ch);
	}
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			printf("\nEntered charecter is vowel");
		}
		else
		{
			printf("Entered charecter is consonent");
		}
	}
}
