/*9.	Write a program to define a structure for a car (make, model, and year) and use nested structures to include the 
owner's details. */
#include <stdio.h>

struct owner
{
    char name[30];
    char city[30];
};

struct car
{
    char make[30];
    char model[30];
    int year;
    struct owner o;
};

int main()
{
    struct car c;

    printf("Enter car make: ");
    gets(c.make);

    printf("Enter car model: ");
    gets(c.model);

    printf("Enter manufacturing year: ");
    scanf("%d", &c.year);
    getchar();   // clear buffer

    printf("Enter owner name: ");
    gets(c.o.name);

    printf("Enter owner city: ");
    gets(c.o.city);

    printf("\nCar Details\n");
    printf("Make: %s\n", c.make);
    printf("Model: %s\n", c.model);
    printf("Year: %d\n", c.year);
    printf("Owner Name: %s\n", c.o.name);
    printf("Owner City: %s\n", c.o.city);

    return 0;
}