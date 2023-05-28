#include <stdio.h>

void swapColumns(int matrix[][10], int rows, int cols, int col1, int col2) {
    for (int i = 0; i < rows; i++) {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[10][10];

    // Ввод элементов матрицы
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Вычисление суммы элементов каждого столбца
    int colSums[10] = {0};
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            colSums[j] += matrix[i][j];
        }
    }

    // Нахождение индексов столбцов с минимальной и максимальной суммой
    int minSumCol = 0;
    int maxSumCol = 0;
    for (int j = 1; j < cols; j++) {
        if (colSums[j] < colSums[minSumCol]) {
            minSumCol = j;
        }
        if (colSums[j] > colSums[maxSumCol]) {
            maxSumCol = j;
        }
    }

    // Меняем местами столбцы с минимальной и максимальной суммой элементов
    swapColumns(matrix, rows, cols, minSumCol, maxSumCol);

    // Вывод исходной матрицы с поменяными столбцами
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
