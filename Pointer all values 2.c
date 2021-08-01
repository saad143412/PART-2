#include<stdio.h>

void displayV(int j){
	printf("%d\n",j);
}
void displayA(int *A){
	printf("%p\n",A);
}

int main()
{
	int x=50;
	displayV(x);
	displayA(&x);
	displayV(*&x);
    displayA(&x+1);
	displayV(*&x+1);
	displayV(*&x+2);
	displayA(&x+2);
	displayA(&x+3);
	displayA(&x+4);
	displayA(&x+5);	
	displayA(&x+6);	
	displayA(&x+7);	
	displayA(&x+8);
}
