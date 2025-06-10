#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact =fact*i;
    }
    return fact;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else if(num==0)
    {
        printf("Factorial for 0 is = 1");
    }
    else
    {
        int result = factorial(num);
        printf("Factorial of %d = %d\n", num, result);
    }
    return 0;
}
