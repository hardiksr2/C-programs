#include<stdio.h>

int main()
{
    int radius, height = 10;
    float pi = 3.14;
    printf("what is the radius of the circle in int:");
    scanf("%d", &radius);
    printf("The area of this circle is =%f", pi * radius * radius);
    printf("\n Volume of the cylinder = %f", pi * radius * radius * height);
    return 0;
}