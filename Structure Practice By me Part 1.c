#include<stdio.h>
struct StudentData{
	char *stu_name;
	int stu_id;
	int stu_age;
};
int main()
{
	struct StudentData student;
	student.stu_name="Ali";
	student.stu_id=1234;
	student.stu_age=30;
	
	printf("Student name is:%s\n",student.stu_name);
	printf("Student id is:%d\n",student.stu_id);
	printf("Student age is:%d\n",student.stu_age);
	
}
#include<stdio.h>
struct Hi{
	char ur_name;
	int ur_age;
	char *fathername;
};
int main()
{
	struct Hi interview;
	interview.ur_name='A';
	interview.ur_age=25;
	interview.fathername="khan";	
	
	printf("What's your name?Answer:%c\n",interview.ur_name);
	printf("Your age:%d\n",interview.ur_age);
	printf("Your father name is:%s\n",interview.fathername);
}
#include<stdio.h>
struct Hi{
	char *ur_name;
	int ur_age;
	char *fathername;
};
int main()
{
	struct Hi interview;
	interview.ur_name="Ali";
	interview.ur_age=25;
	interview.fathername="khan";	
	
	printf("What's your name?Answer:%s\n",interview.ur_name);
	printf("Your age:%d\n",interview.ur_age);
	printf("Your father name is:%s\n",interview.fathername);
}
#include<stdio.h>
struct male{
	int age;
	int height;
	char color;
};
int main()
{
	struct male Ali;
	Ali.age=24;
	Ali.height=176;
	Ali.color='G'; 
	printf("%d\n",Ali.age);
	printf("%d\n",Ali.height);
	printf("%c\n",Ali.color);
}
#include<stdio.h>
struct rect{
	int length;
	int width;
};
int main()
{
	struct rect myrectangle;
	myrectangle.length=4;
	myrectangle.width=4;
	float Area=myrectangle.length*myrectangle.width;
	printf("%f",Area);
	
}
