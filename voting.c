#include <stdio.h>

int main()
{
    char name[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);  

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hello %s!\n", name);

    if (age >= 18&& age<=100)
    {
        printf("You are eligible to vote.\n");
    }
    else if(age<18&&age>=1)
    {
        printf("You are not eligible to vote.\n");
    }
    else {
        printf("invalid age.\n");

    }

    return 0;
}
