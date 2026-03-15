/*1.	Demonstrate: How do you declare a bit-field to store a value that ranges from 0 to 15? */
#include <stdio.h>

typedef struct
{
    unsigned int value : 4;
} Data;

int main()
{
    Data d;

    d.value = 7;

    printf("Value = %u", d.value);

    
}