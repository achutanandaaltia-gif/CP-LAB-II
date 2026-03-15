//6.	Demonstrate: How to use typedef with structures to simplify code readability? 
#include <stdio.h>

typedef struct
{
    int roll;
    float marks;
} stud;

int main()
{
    stud s1;

    s1.roll = 10;
    s1.marks = 90.5;

    printf("Roll = %d\n", s1.roll);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}