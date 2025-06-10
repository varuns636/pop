#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,s,ar;
        printf("Enter 3 sides a, b and c: \n");
        scanf("%f%f%f", &a, &b, &c);
        s=(a+b+c)/2;
        ar= sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of triangle is = %f \n ", ar);
    return 0;
}
