#include <stdio.h>

struct Move {
    int x;
    int y;
};

struct Move getFinishPoint(struct Move arr[], int n) {
    struct Move finalPoint = {0, 0};

    for (int i = 0; i < n; i++) {
        finalPoint.x += arr[i].x;
        finalPoint.y += arr[i].y;
    }

    return finalPoint;
}

int main() {
    // Пример использования функции

    struct Move moves[4];

    moves[0].x = 2;
    moves[0].y = -3;

    moves[1].x = 1;
    moves[1].y = 5;

    moves[2].x = -4;
    moves[2].y = 2;

    moves[3].x = 3;
    moves[3].y = -1;

    struct Move finalPosition = getFinishPoint(moves, 4);

    printf("Конечная точка: (%d, %d)\n", finalPosition.x, finalPosition.y);

    return 0;
}
