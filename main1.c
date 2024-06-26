#include <stdio.h>
#include <stdbool.h>

int main() {
    int x, y;
    bool valid;

    do {
        printf("Введіть значення x: ");
        scanf("%d", &x);
        printf("Введіть значення y: ");
        scanf("%d", &y);

        valid = true;  // Припустимо, що значення правильні, поки не доведено протилежне

        if (((x * x) + x * y - (y * y)) == 0) {
            printf("Помилка: Ділення на 0 у виразі ((x + y) / ((x * x) + x * y - (y * y))).\n");
            valid = false;  // Встановлюємо, що значення некоректні
        }

        if ((1 - (y * y)) == 0) {
            printf("Помилка: Ділення на 0 у виразі (x / (1 - (y * y))).\n");
            valid = false;
        }

        if ((1 - (x * x)) == 0) {
            printf("Помилка: Ділення на 0 у виразі (y / (1 - (x * x))).\n");
            valid = false;
        }

    } while (!valid);  // Повторюємо цикл, поки значення не стануть коректними

    // Якщо умови пройшли перевірку, обчислюємо значення функції
    float f = ((x + y) / ((x * x) + x * y - (y * y))) 
            + (x / (1 - (y * y))) 
            + (y / (1 - (x * x)));

    printf("Значення f: %.2f\n", f);

    return 0;
}
