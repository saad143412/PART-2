#include<stdio.h>
void main()
{
	printf("***Programmer:Muhammad Saad***\n***Reg.No:20MDELE163***\n\n");
	
	int arr[4][3];
	int rollno[4];
	int perc[4];
	
	int i, j;
	int perc0, perc1, perc2, perc3;
	
	for(i=0; i<=3; i++)
	{	
		printf("\nplz enter student no. : %d",i+1);
		printf("\nplz student rollno : ");
		scanf("%d",&rollno[i]);
		for(j=0; j<=2; j++)
		{
			printf("plz enter marks of subject %d : ",j+1);
			scanf("%d",&arr[i][j]);
		}		
	}
	
	for(i=0; i<=3; i++)
	{
		for(j=0; j<=2; j++)
		perc[i] = (arr[i][j] + arr[i][j] +arr[i][j])*100/300;
	}
	printf("\n\t\t*****************************************\n");
	for(i=0; i<=3; i++)
	{
		printf("student no. : %d\n",i+1);
		printf("His Roll no. : %d\n",rollno[i]);
		for(j=0; j<=2; j++)
			printf("Subject %d marks : %d\n",j+1,arr[i][j]);
			printf("His percentage  : %d percent\n\n",perc[i]);
			
	}

}

