/*Write a program to define a structure for a student containing fields for name,
roll number, and marks. Input and display the details.*/
#include<stdio.h>
struct student
{
	char name[500] ;
	int rollno;
	
	float marks;
	};
	main()
{
	struct student s;
	printf("enter name\n");
	gets(s.name);
	 printf("enter roll numer\n");
	 scanf("%d",&s.rollno);
	 printf("enter marks\n");
	 scanf("%f",&s.marks);
	 printf("student details\n");
	 printf("%s\n%d\n%f\n",s.name,s.rollno,s.marks);
}
