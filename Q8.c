#include <stdio.h>
#define PI 3.14159
#define MAX_CIRCLES 3

struct Circle
{
    float radius;
    float area;
};

void calculateArea(struct Circle* circle);
int main()
{
    struct Circle circles[MAX_CIRCLES];
    for (int i = 0; i < MAX_CIRCLES; i++) {
        printf("======= Circle %d =======\n", i + 1);
        printf("Enter Radius: ");
        scanf("%f", &circles[i].radius);
        
        calculateArea(&circles[i]);
    }
    
    printf("\nArea of Circles:\n");
    for (int i = 0; i < MAX_CIRCLES; i++)
    {
        printf("Circle %d - Radius: %.2f, Area: %.2f\n", i + 1, circles[i].radius, circles[i].area);
    }
    return 0;
}
void calculateArea(struct Circle* circle)
{
    circle->area = PI * circle->radius * circle->radius;
}

