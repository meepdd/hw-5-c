#include <stdio.h>

// Функция для вычисления наибольшего общего делителя (НОД)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// Функция для сокращения дроби
void reduce_fraction(int *a, int *b) {
    int greatestCommonDivisor = gcd(*a, *b);
    *a /= greatestCommonDivisor;
    *b /= greatestCommonDivisor;
}

int main() {
    int numerator = 12;
    int denominator = 18;

    printf("Дробь до сокращения: %d/%d\n", numerator, denominator);

    reduce_fraction(&numerator, &denominator);

    printf("Дробь после сокращения: %d/%d\n", numerator, denominator);

    return 0;
}
