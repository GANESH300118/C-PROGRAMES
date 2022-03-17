#include<stdio.h>
int main()
{
	int a;
	printf("Enter value");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("Eliglibe for voting");
	}
	else
	{
		printf("Not eligible for voting");
	}
	return 0;
}
