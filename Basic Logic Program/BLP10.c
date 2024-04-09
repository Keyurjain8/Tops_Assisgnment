//find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main()
{
	int w,l,h,A;
	printf("Enter the width of rectangular prism",w);
	scanf("%d",&w);
	printf("Enter the length of rectangular prism",l);
	scanf("%d",&l);
	printf("Enter the heigth of rectangular prism",h);
	scanf("%d",&h);
	A= 2 * (w*l + h*l  + h*w);
	printf("area of a rectangular prism %d is",A);
	
}
