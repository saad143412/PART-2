#include<stdio.h>
struct Rect{
	int len;
	int width;
};
int main()
{
	struct Rect Rc;
	Rc.len=4;
	Rc.width=4;
	float Area=Rc.len*Rc.width;
	printf("Multiplication:%f\n",Area);
	
	float A=Rc.len+Rc.width;
	printf("Addition:%f\n",A);
	
	float Ar=Rc.len-Rc.width;
	printf("Minus:%f\n",Ar);
	
	float Are=Rc.len/Rc.width;
	printf("Divide:%f\n",Are);
	
} 
