#include <stdio.h>

int main() {
    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);

    printf("#%02X%02X%02X\n", r, g, b);
    return 0;
}
