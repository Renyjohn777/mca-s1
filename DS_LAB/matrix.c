#include <stdio.h>

int main() {
    int m, n, p, i, j, k;

    printf("Enter number of rows and columns for matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter number of rows and columns for matrix B: ");
    scanf("%d %d", &n, &p);

    int A[m][n], B[n][p], Sum[m][p], Mul[m][p], Sub[m][p];

    // Input matrices
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    // Matrix Addition
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
            Sum[i][j] = A[i][j] + B[i][j];

    // Matrix Subtraction
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
            Sub[i][j] = A[i][j] - B[i][j];

    // Matrix Multiplication
    if (n == p) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < p; j++) {
                Mul[i][j] = 0;
                for (k = 0; k < n; k++)
                    Mul[i][j] += A[i][k] * B[k][j];
            }
        }

        // Output results
        printf("\nMatrix Addition:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < p; j++)
                printf("%d ", Sum[i][j]);
            printf("\n");
        }

        printf("\nMatrix Subtraction:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < p; j++)
                printf("%d ", Sub[i][j]);
            printf("\n");
        }

        printf("\nMatrix Multiplication:\n");
        for (i = 0; i < m; i++) {
            for (j = 0; j < p; j++)
                printf("%d ", Mul[i][j]);
            printf("\n");
        }
    } else {
        printf("\nMatrix multiplication not possible.\n");
    }

    return 0;
}

  
  
  
  
  
