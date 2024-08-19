#include <stdio.h>

int digitarNumero(int num){
  do {
    printf("Digite um número inteiro positivo\n");
    scanf("%d", &num);
    if (num < 0){
      printf("Número inválido. Digite novamente\n");
    }
  } while (num < 0);
  return num;
}

int calcularFatorial(int num, int i, int fatorial){
  for (i = 1; i <= num; i++) {
      fatorial *= i;
  }
  return fatorial;
}

int main() {
  int num, i, fatorial = 1;

  num = digitarNumero(num);

  fatorial = calcularFatorial(num, i, fatorial);

  printf("O fatorial de %d é %d\n", num, fatorial);
  
}