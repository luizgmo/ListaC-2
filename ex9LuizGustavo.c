#include <math.h>
#include <stdio.h>

void calcularSoma1(int i, double soma) {
  for (i = 1; i <= 50; i++) {
    soma += pow(2, i) / (51 - i);
  }
  printf("Soma 1: %.0lf\n", soma);
}

void calcularSoma2(int i, double soma) {
  for (i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      soma -= i / pow(i, 2);
    } else {
      soma += i / pow(i, 2);
    }
  }
  printf("Soma 2: %.10lf\n", soma);
}

int main() {
  int i;
  double soma = 0;

  calcularSoma1(i, soma);
  calcularSoma2(i, soma);
}
