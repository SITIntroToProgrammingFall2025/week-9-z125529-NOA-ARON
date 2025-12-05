#include <stdio.h>

int main() {
    // z125529

    int A[3][2], B[2][3], C[3][3];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 2; j++)
            scanf("%d", &A[i][j]);

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &B[i][j]);

    printf("The first matrix you entered is\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }

    printf("The second matrix you entered is\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++)
            printf("%4d", B[i][j]);
        printf("\n");
    }

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j];

    printf("The multiplication product of matrix A and matrix B:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            printf("%4d", C[i][j]);
        printf("\n");
    }

    return 0;
}