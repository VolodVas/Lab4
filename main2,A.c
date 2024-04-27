#include <stdio.h>

int main() {
    int sum = 0;

    // Цикл з параметром
    for (int i = 1; i <= 10; i += 2) {
        sum += i;  // Сума непарних чисел
    }

    int square_of_sum = sum * sum;  // Квадрат суми

    printf("Квадрат суми всіх непарних чисел у діапазоні [1;10]: %d\n", square_of_sum);

    return 0;
}

