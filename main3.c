#include <stdio.h>

int main() {
    float sum = 0;
    int n;
    float x;
  printf("Введіть значення n: ");
  scanf("%d", &n);
  printf("Введіть значення x: ");
  scanf("%f", &x);


    for (int i = 1; i <= n; i++){
      for(int j = 2; j <= n; j++) {
      sum += x+i*j;
      }
    }
    printf("Cумa: %.1f\n", sum);

    return 0;
}
