
#include<stdio.h>
#include<math.h>
int main()

{
	float a,b,c,total;
	scanf("%f%f%f",&a,&b,&c);
	total=(ceil(a/2)+ceil(b/2)+ceil(c/2));
	printf("%.1f",total);
}
