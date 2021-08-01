#include<stdio.h>
void main()
{
	/*Programmer Name:Muhammad Saad
	  Reg.No:20MDELE163
	  Date:21/07/2021
	*/  	 
	printf("Programmer:Muhammad Saad\nReg.No:20MDELE163\n");
	printf("***************************************************************\n");
	printf("PROGRAM FOR FINDING THE ENTERED NUMBER IS A PRIME NUMBER OR NOT\n");
	printf("***************************************************************\n");
	int num,i;
	printf("Please Enter a number:");
	scanf("%d",&num);
	for(i=2;i<num;i++)
    {
	
		if(num%i==0)
	    {	
			printf("%d is not Prime Number\n",num);
			break;
		}
	}
	if(i==num)
	printf("%d is a Prime Number",num);
}


