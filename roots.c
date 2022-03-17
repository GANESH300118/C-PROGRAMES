#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,r1,r2,d,real,imaginary;
	printf("Enter values of a,b,c");
	scanf("%f%f%f",&a,&b,&c);
	d=(b*b-4*a*c);
	if(d>=0)
	{
		if(d==0)
		{
			r1=(-b/2*a);
			r2=(-b/2*a);
			printf("root1=%f\nroot2=%f\n",r1,r2);
		}
		else
		{
			r1=(-b+sqrt(d)/2*a);
			r2=(-b/sqrt(d)/2*a);
			printf("root1=%f\nroot2=%f\n",r1,r2);
		}
	}
	else
	{
		real=-b/2*a;
		imaginary=sqrt(d)/2*a;
		printf("root1=%f+%fi\nroot2=%f+%fi",real,imaginary,real,imaginary);
	}
}
