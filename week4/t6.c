#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void multiply_matrices(int a[MAX_ROWS][MAX_COLS], int b[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows_a, int cols_a, int rows_b, int cols_b);

int main() {
    int rows_a, cols_a, rows_b, cols_b;

    printf("Enter the number of rows and columns for the first matrix (separated by a space): ");
    scanf("%d %d", &rows_a, &cols_a);

    printf("Enter the number of rows and columns for the second matrix (separated by a space): ");
    scanf("%d %d", &rows_b, &cols_b);

    if (cols_a != rows_b) {
        printf("Cannot multiply matrices. Number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
        return 1;
    }

    int matrix_a[MAX_ROWS][MAX_COLS];
    int matrix_b[MAX_ROWS][MAX_COLS];
    int result[MAX_ROWS][MAX_COLS];

    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < cols_a; ++j) {
            scanf("%d", &matrix_a[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows_b; ++i) {
        for (int j = 0; j < cols_b; ++j) {
            scanf("%d", &matrix_b[i][j]);
        }
    }

    multiply_matrices(matrix_a, matrix_b, result, rows_a, cols_a, rows_b, cols_b);

    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < cols_b; ++j) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multiply_matrices(int a[MAX_ROWS][MAX_COLS], int b[MAX_ROWS][MAX_COLS], int result[MAX_ROWS][MAX_COLS], int rows_a, int cols_a, int rows_b, int cols_b) {
    for (int i = 0; i < rows_a; ++i) {
        for (int j = 0; j < cols_b; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols_a; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
