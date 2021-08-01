#include<stdio.h>
	
	struct book
	{
		char name[20];
		float edition;
		int pages;
	};

void main()
{
	printf("Programmer Name : Muhammad Mustafa\nRegistration No : 19MDELD045\n\n");
	
	struct book b1 = {"Programming ", 12, 1055};
	struct book b2 = {"Let Us C", 13, 933};
	printf("Elements of Book 1 are :\n Name : %s\n Edition : %.2f\n Pages : %d\n\n",b1.name,b1.edition,b1.pages);
	
	printf("Elements of Book 2 are :\n Name : %s\n Edition : %.2f\n Pages : %d\n",b2.name,b2.edition,b2.pages);
			
}                                                                  

