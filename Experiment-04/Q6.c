//6.	Write a program to define a structure for a book with title, author, and price. Input details for 10 books and display them
#include <stdio.h>

struct book
{
    char title[50];
    char author[50];
    int price;
};

int main()
{
    struct book b[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        printf("\nEnter details of Book %d\n", i+1);

        printf("Enter Title: ");
        gets( b[i].title);

        printf("Enter Author: ");
        gets( b[i].author);

        printf("Enter Price: ");
        scanf("%d", &b[i].price);
    }

    printf("\n--- Book Details ---\n");

    for(i = 0; i < 10; i++)
    {
        printf("\nBook %d\n", i+1);
        printf("Title: %s\n", b[i].title);
        printf("Author: %s\n", b[i].author);
        printf("Price: %d\n", b[i].price);
    }

}