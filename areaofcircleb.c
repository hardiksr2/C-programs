#include<stdio.h>

int main()
{
    int radius;
    float pi = 3.14;
    printf("what is the radius of the circle in int:");
    scanf("%d", &radius);
    printf("The area of this circle is =%f", pi * radius * radius);
    return 0;
}