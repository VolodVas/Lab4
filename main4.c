#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    float a = -3.0;  // Початок інтервалу
    float b = 3.0;  // Кінець інтервалу
    float dx = 0.5;  // Крок
    float x = a;  // Поточне значення x

    printf("x\t\ty=f(x)\n");  // Заголовок таблиці

    // Цикл із передумовою
    while (x <= b) {
        float denominator = x + sqrt(13 * fabs(x));  // Обчислення знаменника

        if (denominator == 0) {  // Перевірка ділення на нуль
            printf("Помилка: ділення на нуль при x = %.2f.\n", x);
        } else {
            float y = (2 + pow(x, 3)) / denominator;  // Обчислення значення y
            printf("%.2f\t%.2f\n", x, y);  // Вивід значення x і y
        }

        x += dx;  // Переходимо до наступного значення
    }

    return 0;
}
