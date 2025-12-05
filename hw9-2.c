#include <stdio.h>

int main() {
    // z125529

    int a[3][3], b[3][3];

    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    // Flip 
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            b[i][j] = a[i][2 - j];

    
    printf("You entered\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }

    printf("Output\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++)
            printf("%4d", b[i][j]);
        printf("\n");
    }

    return 0;
}
