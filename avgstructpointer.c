#include <stdio.h>
struct Student 
{
    char name[50];
    float marks;
};
int main() {
    int n, i;
    float sum = 0.0, average;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (i = 0; i < n; i++) 
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        sum += s[i].marks;
    }
    average = sum / n;
    printf("Average marks = %.2f\n", average);
    printf("Students scoring above average:\n");
    for (i = 0; i < n; i++) 
    {
        if (s[i].marks > average)
            printf("%s: %.2f\n", s[i].name, s[i].marks);
    }
    printf("Students scoring below average:\n");
    for (i = 0; i < n; i++) 
    {
        if (s[i].marks < average)
            printf("%s: %.2f\n", s[i].name, s[i].marks);
    }
    return 0;
}