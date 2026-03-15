/*8.	Develop a program to create a structure for a 2D point and use it to calculate the distance between two points. */
#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} Point;

int main()
{
    Point p1, p2;
    float distance;

    printf("Enter first point (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter second point (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    distance = sqrt((p2.x - p1.x)*(p2.x - p1.x) +
                    (p2.y - p1.y)*(p2.y - p1.y));

    printf("Distance between two points = %.2f", distance);

    return 0;
}