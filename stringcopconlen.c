#include <stdio.h>
#include <string.h>
void compareStrings(char str1[], char str2[])
{
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");
}
void concatenateStrings(char str1[], char str2[])
{
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}
void stringLength(char str[])
{
    printf("Length of the string: %lu\n", strlen(str));
}

int main()
{
    char str1[100], str2[100];
    int choice;
        printf("\nString Operations Menu:\n");
        printf("1. Compare Strings\n");
        printf("2. Concatenate Strings\n");
        printf("3. String Length\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume newline character

        switch (choice) {
            case 1:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                 compareStrings(str1, str2);
                break;
            case 2:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                concatenateStrings(str1, str2);
                break;
            case 3:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                stringLength(str1);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    return 0;
}