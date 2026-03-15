//1.	Write a program to create a pointer to an integer variable and demonstrate how the pointer can modify the value of the variable
#include <stdio.h>

int main()
{
    int num = 10;
    int *ptr;

    ptr = &num; 

    printf("Original value of num = %d\n", num);

    *ptr = 25;    

    printf("Modified value of num = %d\n", num);


}