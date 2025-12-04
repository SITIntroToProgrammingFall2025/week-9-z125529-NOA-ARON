#include <stdio.h>

int main() {
    int a[3][3], b[3][3];

    printf("Enter a 3x3 array:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    // Flip horizontally
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            b[i][j] = a[i][2 - j];

    printf("\nOriginal array:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    printf("\nFlipped array:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            printf("%4d", b[i][j]);
        printf("\n");
    }

    return 0;
}
