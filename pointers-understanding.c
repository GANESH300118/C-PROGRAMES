#include<stdio.h>
void main()
{
	int a=10,*p;
	p=&a;
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%d\n",&a);
	printf("%u\n",p);
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(p));
	p++;
	printf("%d\n",p);
}
