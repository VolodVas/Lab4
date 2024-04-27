#include <stdio.h>

int main() {
    int sum = 0;
    int i = 1;

    // Цикл з передумовою
    while (i <= 10) {
        if (i % 2 != 0) {  // Якщо число непарне
            sum += i;  // Додаємо його до суми
        }
        i += 2;  // Переходимо до наступного непарного числа
    }

    int square_of_sum = sum * sum;  // Квадрат суми

    printf("Квадрат суми всіх непарних чисел у діапазоні [1;10]: %d\n", square_of_sum);

    return 0;
}

