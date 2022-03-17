#include<stdio.h>
void main()
{
	char ch;
	printf("Enter your grade");
	scanf("%c",&ch);
	switch(ch)
	{
		case'a':
		case'A':printf("Excellent");
		break;
		case'b':
		case'B':
		case'c':
		case'C':printf("Very good");
		break;
		case'd':
		case'D':
		case'e':
		case'E':printf("Good");
		break;
		case'f':
		case'F':printf("Fail");
		default:printf("Wrong grade");
	}
}
