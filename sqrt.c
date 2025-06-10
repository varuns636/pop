#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2, real, img;

    printf("Enter coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d == 0) {
        printf("Roots are real and equal\n");
        root1 = root2 = -b / (2 * a);
        printf("Root1 = %f and Root2 = %f\n", root1, root2);
    }
    else if (d > 0) {
        printf("Roots are real and distinct\n");
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %f and Root2 = %f\n", root1, root2);
    }
    else {
        printf("Roots are complex and distinct\n");
        real = -b / (2 * a);
        img = sqrt(fabs(d)) / (2 * a);
        printf("Root1 = %.2f + i%.2f\n", real, img);
        printf("Root2 = %.2f - i%.2f\n", real, img);
    }

    return 0;
}