#include <stdio.h>
#include<math.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact =pow(n,3);
    }
    return fact;
}

int main()
{
    int num, result = 0;
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
        for (int i = 1; i <= num; i++)
        {
            result += factorial(i);
        }
         printf("Sum of factorials from 1 to %d = %d\n", num, result);
    }

    return 0;
}
