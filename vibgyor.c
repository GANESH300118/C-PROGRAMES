#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the charecter");
	scanf("%c",&ch);
	if(ch>=97||ch<=122)
	{
	ch=ch-32;	
	}
	if(ch=='V')
	printf("violet");
	else if(ch=='I')
	printf("indgo");
	else if(ch=='B')
	printf("blue");
	else if(ch=='G')
	printf("green");
	else if(ch=='Y')
	printf("yellow");
	else if(ch=='O')
	printf("orange");
	else if(ch=='R')
	printf("red");
	else
	printf("Not a charecter of VIBGYOR");
}
