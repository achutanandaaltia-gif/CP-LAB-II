//4.	Create a nested structure to store a student’s details (name, roll number, and address where address is another structure). 
#include <stdio.h>
// Structure for Address
struct address{
    char city[100];
    char state[100];
    int pin;
};
// Structure for Student
struct Student {
    char name[50];
    int roll_number;
    struct Address addr;
    // Nested structure
};
int main() {
    struct Student s1;
      // Input
    printf("Enter Student Name: ");
    gets(s1.name);   // using gets()
    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll_number);
    printf("Enter City: ");
    gets(s1.addr.city);
    printf("Enter State: ");
    gets(s1.addr.state);
    printf("Enter Pincode: ");
    scanf("%d", &s1.addr.pincode);
 // Output
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll_number);
    printf("City: %s\n", s1.addr.city);
    printf("State: %s\n", s1.addr.state);
    printf("Pincode: %d\n", s1.addr.pincode);

 
}