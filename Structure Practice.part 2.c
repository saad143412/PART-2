#include<stdio.h>
struct Company{
	char *Name;
	int Age;
	char Dep;
};
int main()
{
	struct Company Bata;
	Bata.Name="Ali Khan";
	Bata.Age=32;
	Bata.Dep='B';
	printf("%s\n",Bata.Name);
	printf("%d\n",Bata.Age);
	printf("%c\n\n",Bata.Dep);
	
	Bata.Name="Ali Khan";
	Bata.Age=29;
	Bata.Dep='S';
	printf("%s\n",Bata.Name);
	printf("%d\n",Bata.Age);
	printf("%c\n\n",Bata.Dep);
	
	Bata.Name="Ali Khan";
	Bata.Age=45;
	Bata.Dep='P';
	printf("%s\n",Bata.Name);
	printf("%d\n",Bata.Age);
	printf("%c\n\n",Bata.Dep);
	
}
