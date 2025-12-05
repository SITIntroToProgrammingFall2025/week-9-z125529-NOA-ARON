#include <stdio.h>

int main() {
    // z125529
    int rows_A = 2, cols_A = 3;
    int rows_B = 3, cols_B = 2;

    double A[2][3], B[3][2], C[2][2];

    for(int i = 0; i < rows_A; i++) {
        for(int j = 0; j < cols_A; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    for(int i = 0; i < rows_B; i++) {
        for(int j = 0; j < cols_B; j++) {
            scanf("%lf", &B[i][j]);
        }
    }

    printf("The first matrix you entered is\n");
    for(int i = 0; i < rows_A; i++) {
        for(int j = 0; j < cols_A; j++) {
            printf("%g ", A[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for(int i = 0; i < rows_B; i++) {
        for(int j = 0; j < cols_B; j++) {
            printf("%g ", B[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < rows_A; i++) {
        for(int j = 0; j < cols_B; j++) {
            C[i][j] = 0;
            for(int k = 0; k < cols_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The multiplication product of matrix A and matrix B:\n");
    for(int i = 0; i < rows_A; i++) {
        for(int j = 0; j < cols_B; j++) {
            printf("%g ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
