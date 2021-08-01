#include<stdio.h>

struct telephone
{
	char name[15];
	unsigned long number;
};

void main()
{
	struct telephone index[3];
	int i;
	
	for(i=0; i<3; i++)
	{
		printf("Enter student's Name and phone Number:\n");
		fflush(stdin);
		scanf("%s %lu", &index[i].name, &index[i].number);
	}
	
	for(i=0; i<3; i++)
	{
		printf("Student Name : %s\tAnd his phone number : %lu\n",index[i].name,index[i].number);
	}
}
