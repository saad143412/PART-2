#include<stdio.h>
void f1();
int main()
{
	f1();
	f1();
}
void f1()
{
	register int i=1;
	i++;
	printf("i=%d\n",i);
}
