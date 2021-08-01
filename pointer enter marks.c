#include<stdio.h>
void main()
{
	printf("***Programmer:Muhammad Mustafa***\n***Reg.No:19MDELD045***\n\n");
	
int i;
int sum = 0;
float average;
int marks[15];

for(i=0; i<=14; i++)
{
	printf("Enter you marks: ");
	scanf("%d",&marks[i]);	
}

printf("*************************\nyour Entered Marks are:\n");

for(i=0; i<=14; i++)
{
	printf("%d......%d\n",i,marks[i]);
	
	sum = sum+marks[i];
	
}
printf("\n*******************************************************\n");

printf("Sum of the Marks is :%d\n",sum);

average = sum/i;
printf("Average of the Marks is :%.2f",average);



}
