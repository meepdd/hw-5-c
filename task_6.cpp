#include <stdio.h>

int abs_arr(int arr[], int n) {
    int replacements = 0;
    int *ptr = arr;

    while (ptr < arr + n) {
        if (*ptr < 0) {
            *ptr = -*ptr;
            replacements++;
        }
        ptr++;
    }

    return replacements;
}

int main() {
    int arr[] = {1, -2, 3, -4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Исходный массив: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int replacements = abs_arr(arr, size);

    printf("Массив после замены: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Количество замен: %d\n", replacements);

    return 0;
}
