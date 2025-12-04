#include <stdio.h>

int main() {
    int A[3][2], B[2][3], C[3][3];

    printf("Enter 3x2 matrix A:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &A[i][j]);

    printf("Enter 2x3 matrix B:\n");
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    // Multiply
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j];

    printf("Result of A * B:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            printf("%4d", C[i][j]);
        printf("\n");
    }

    return 0;
}