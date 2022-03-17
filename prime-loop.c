#include<stdio.h>
void main()
{
	int i=1,n,c=0,z;
	printf("Enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			i++,c++;
		}
		else
		i++;
	}
	if(c>2)
	printf("It is not a prime number");
	else if (c==2)
	printf("It is a prime number");
	else
	printf("It is neither prime nor composite number");
}
