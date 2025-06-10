#include <stdio.h>

void main() {
    int i, j, k, m, n, p, q;
    int A[20][20], B[20][20], C[20][20];

    printf("Enter the number of rows and columns of matrix A:\n");
    scanf("%d %d", &m, &n);

    printf("Enter the number of rows and columns of matrix B:\n");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("Matrix multiplication is not possible\n");
    } 
    else
    {
        printf("Enter the elements of matrix A:\n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                scanf("%d", &A[i][j]);
            }
        }

        printf("Enter the elements of matrix B:\n");
        for (i = 0; i < p; i++) 
        
        
        {
            for (j = 0; j < q; j++) 
            {
                scanf("%d", &B[i][j]);
            }
        }
        printf("The elements of matrix A are:\n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++) 
            {
                printf("%d\t", A[i][j]);
            }
            printf("\n");
        }
        printf("The elements of matrix B are:\n");
        for (i = 0; i < p; i++) {
            for (j = 0; j < q; j++) 
            {
                printf("%d\t", B[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < q; j++) 
            {
                C[i][j] = 0;
                for (k = 0; k < n; k++) 
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        printf("The resultant matrix is:\n");
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < q; j++) 
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }
}