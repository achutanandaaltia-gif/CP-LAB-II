//5.	How can you initialize an array of structures? Show an example


#include <stdio.h>

struct student
{
    int roll;
    char name[20];
};

int main()
{
    struct student s[3] = {
        {1, "Rahul"},
        {2, "Riya"},
        {3, "Amit"}
    };

    int i;

    for(i = 0; i < 3; i++)
    {
        printf("Roll: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
    }
}