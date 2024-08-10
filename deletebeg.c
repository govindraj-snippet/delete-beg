#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);

    
    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    
    for (int i = 0; i < n - 1; i++) {
        array[i] = array[i + 1];
    }
    n--; 

    
    printf("Array after deleting the first element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}