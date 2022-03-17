#include<stdio.h>
void main()
{
	float a,b,c,x,y,z;
	printf("Enter 3 values");
	scanf("%f%f%f",&a,&b,&c);
	x=(a>b)&&(b>c);
	y=(a>0)||(b>0)||(c>0);
	z=!(a<b);
	printf("%f%f%f",x,y,z);
}
