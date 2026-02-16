/*Write a program to define a structure for a complex number (real and imaginary
parts) and write a function to perform addition of two complex numbers.*/
#include<stdio.h>
struct complex
{
	int r,i;
	
};
main()
{
	struct complex c1,c2,c3,c4;
	printf("enter 1st complex no.\n");
	scanf("%d%d",&c1.r,&c2.i);
	printf("enter 2nd complex no.\n");
	scanf("%d%d",&c2.r,&c2.i);
	c3.r=c1.r+c2.r;
	c3.i=c1.r+c2.r;
	c4.i=c1.i+c2.i;
	c4.r=c1.i+c2.i;
	printf("%d+%di\n",c3.r,c3.i);
	printf("%d+%di\n",c4.r,c4.i);
	
}
