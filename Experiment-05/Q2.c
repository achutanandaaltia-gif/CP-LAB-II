//2.	Explain how you can use a pointer to access and print elements of an integer array. 
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    ptr = &arr;  
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", *(ptr + i));
    }

   
}


