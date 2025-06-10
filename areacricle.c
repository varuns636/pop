#include <stdio.h>
float areaOfCircle(float radius) 
{
    float PI=3.14;
    return PI * radius * radius;
}

int main() 
{
    float r, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    area = areaOfCircle(r);

    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
