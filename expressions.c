#include<stdio.h>
void main()
{
	int a=3,b=2,c=4,x=2,y=5,z1,z2,z3,z4;
	z1=(x-y*b);
	z2=((x/y+a)*(x/y+c));
	z3=((x+y)*(x/y+c));
	z4=((x+y)*(y+b-a)+a);
	printf("Answer to z1 is %d",z1);
	printf("\nAnswer to z2 is %d",z2);
	printf("\nAnswer to z3 is %d",z3);
	printf("\nAnswer to z4 is %d",z4);
}
