#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct Point
{
    int X;
    int Y;
    struct Point *next;
};
struct Point p1, p2, p3;

void printMembers(struct Point p)
{
    printf("The x co-ordinate of point is: %d \n", p.X);
    printf("The y co-ordinate of point is: %d \n", p.Y);
    printf("the address of next point is: %u \n", p.next);
}

float dist(struct Point p1, struct Point p2)
{
    int x = (p1.X - p2.X) * (p1.X - p2.X);
    int y = (p1.Y - p2.Y) * (p1.Y - p2.Y);
    float d = sqrt(x + y);
    return d;
}

int main()
{

    // (a) Initialize the structure variables.
    printf("enter the x co-ordinate of point 1: ");
    scanf("%d", &p1.X);
    printf("enter the y co-ordinate of point 1: ");
    scanf("%d", &p1.Y);

    printf("enter the x co-ordinate of point 2: ");
    scanf("%d", &p2.X);
    printf("enter the y co-ordinate of point 2: ");
    scanf("%d", &p2.Y);

    printf("enter the x co-ordinate of point 3: ");
    scanf("%d", &p3.X);
    printf("enter the y co-ordinate of point 3: ");
    scanf("%d", &p3.Y);

    // (b) Store the address of p2 in the address part of p1.
    // (c) Store the address of p3 in the address part of p2.
    p1.next = &p2;
    p2.next = &p3;
    p3.next = NULL;

    // (d) Print all the members of three points.
    printMembers(p1);
    printMembers(p2);
    printMembers(p3);

    // (e) Print the member’s value of p2 & p3 using p1
    printf("The x co-ordinate of point 2 is: %d \n", (p1.next)->X);
    printf("The y co-ordinate of point 2 is: %d \n", (p1.next)->Y);

    printf("The x co-ordinate of point 3 is: %d \n", (p1.next)->next->X);
    printf("The y co-ordinate of point 3 is: %d \n", (p1.next)->next->Y);

    // (f) Print the member value of p3 using p2.
    printf("The x co-ordinate of point 3 is: %d \n", (p2.next)->X);
    printf("The y co-ordinate of point 3 is: %d \n", (p2.next)->Y);

    // (g) Compute all pair wise distances between these points.
    printf("The distance between point p1 and p2 is: %.2f\n", dist(p1, p2));
    printf("The distance between point p1 and p3 is: %.2f\n", dist(p1, p3));
    printf("The distance between point p3 and p2 is: %.2f\n", dist(p3, p2));
    
    return 0;
}