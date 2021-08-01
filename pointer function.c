#include<stdio.h>

void main()
{

int A,Y;
printf("plz enter a variable:");
scanf("%d",&A);
int *p;
p = &A;
Y = *p;


printf("The Variable Address is : %d\n",p);
printf("The variable enter by user: %d",Y);

}
