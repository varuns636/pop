#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100], transpose[100][100];

    printf("Enter the number of rows and columns of matrix A:\n");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("The resultant transposed matrix A is:\n");
    for (int i = 0; i < cols; i++) 
    { 
        for (int j = 0; j < rows; j++) 
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
