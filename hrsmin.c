#include <stdio.h>

void convertToMinutes(float *hours, float *minutes) 
{
    *minutes = (*hours) * 60;
}

int main() 
{
    float hrs, mins;

    printf("Enter time in hours: ");
    scanf("%f", &hrs);

    convertToMinutes(&hrs, &mins);

    printf("%.2f hours is equal to %.2f minutes.\n", hrs, mins);

    return 0;
}
