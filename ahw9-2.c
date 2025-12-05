#include <stdio.h>

int main() {
    // z125529
    int n = 5;

    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // printf("Original tab\n");
    // for(int i = 0; i < n; i++)
    //     printf("%d ", arr[i]);

    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("sorted array:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
