#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[100];

    // Ввод элементов массива
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Меняем местами первую и вторую половины массива
    int k = N / 2;
    for (int i = 0; i < k; i++) {
        swap(&arr[i], &arr[i + k]);
    }

    // Вывод нового массива
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
