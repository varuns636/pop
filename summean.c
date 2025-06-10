#include <stdio.h>
#include <math.h>
int main() 
{
    float numbers[100];
    int i, N;
    float sum = 0.0, mean, stddev = 0.0;
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);
    printf("Enter %d numbers:\n", N);
    for (i = 0; i < N; ++i) 
    {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }
    mean = sum / N;
    for (i = 0; i < N; ++i) 
    {
        stddev += pow(numbers[i] - mean, 2);
    }
    stddev = sqrt(stddev / N);
    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
    printf("Standard Deviation = %.2f\n", stddev);
    return 0;
}