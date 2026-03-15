/*3.	Create a program to illustrate the use of pointers with character variables. Include both reading and printing the character via the pointer*/

#include <stdio.h>

int main()
{
    char ch;
    char *ptr;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ptr = &ch;

    printf("Character using variable = %c\n", ch);
    printf("Character using pointer = %c\n", *ptr);

    
}