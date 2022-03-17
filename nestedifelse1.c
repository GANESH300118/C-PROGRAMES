#include<stdio.h>
main()
{
	int n1,n2,n3;
	printf("enter the three values");
	scanf("%d%d%d",&n1,&n2,&n3);
	if((n1>n2)&&(n1>n3))
	  printf("%d is maximum of %d,%d%,d",n1,n1,n2,n3);
	  if((n2>n1)&&(n2>n3))
	  printf("%d is maximum of %d,%d%,d",n2,n1,n2,n3);
	  if((n3>n1)&&(n3>n2))
	  printf("%d is maximum of %d,%d%,d",n3,n1,n2,n3);
}
