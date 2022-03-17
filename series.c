#include<stdio.h>
#include<math.h>
void main()
{
	int j=2,i,n,product;
	float t,x;
	printf("Enter x");
	scanf("%f",&x);
	printf("Enter n");
	scanf("%d",&n);
	t=x;
	while(j<=n)
	{
		i=j;
		product=i;
		while(i>1)
		{
			product=product*(i-1);
			i=i-1;
		}
		t=t+pow(x,j)/product;
		j++;
	}
	printf("%f",t);
}
