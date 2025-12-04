#include <stdio.h>

int main() {
    float a[2][2];
    printf("Enter a 2x2 matrix:\n");

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            scanf("%f", &a[i][j]);

    float det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    printf("Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++)
            printf("%6.2f ", a[i][j]);
        printf("\n");
    }

    printf("Determinant = %.2f\n", det);
    return 0;
}