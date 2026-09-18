#include <stdio.h>

int main() {
    double a = 0, b = 0;
    char c;

    printf("Введите два числа через пробел: \n");

    scanf("%lf %lf", &a, &b);

    printf("Введите оператор: \n");

    scanf(" %c", &c);

    if (c == '+') {
        printf("%.2lf", a + b);
    }
    else if (c == '-') {
        printf("%.2lf", a - b);
    }
    else if (c == '*') {
        printf("%.2lf", a * b);
    }
    else if (c == '/') {
        if (b != 0) {
            printf("%.2lf", a / b);
        }
        else {
            printf("Деление на ноль!");
        }
    }

    return 0;
}