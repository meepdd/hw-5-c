#include <stdio.h>
#include <string.h>


struct Person {
    char name[30];
    int age;
};

float averageAge(struct Person arr[], int n) {
    int sum = 0;

    // Суммируем возрасты всех людей в массиве
    for (int i = 0; i < n; i++) {
        sum += arr[i].age;
    }

    // Вычисляем средний возраст
    float average = (float)sum / n;

    return average;
}

int main() {
    // Пример использования функции

    struct Person people[3];

    // Заполнение массива структур
    strcpy(people[0].name, "John");
    people[0].age = 25;

    strcpy(people[1].name, "Alice");
    people[1].age = 30;

    strcpy(people[2].name, "Bob");
    people[2].age = 35;

    // Вычисление среднего возраста
    float avgAge = averageAge(people, 3);

    printf("Средний возраст: %.2f\n", avgAge);

    return 0;
}