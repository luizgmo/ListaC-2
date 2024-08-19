#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void exibirTermos(int num1, int num2, int i, int termo, int qnt){
  printf("%d\n", num1);
  printf("%d\n", num2);

  for (i = 3; i <= qnt; i++) {
    if (i % 2 == 0) {
      termo = num2 - num1;
    } else {
      termo = num2 + num1;
    }
    printf("%d\n", termo);
    num1 = num2;
    num2 = termo;
  }
}

int main() {

  int num1, num2, qnt, i, termo;

  printf("Digite o número 1: ");
  scanf("%d", &num1);

  printf("Digite o número 2: ");
  scanf("%d", &num2);

  do {
    printf("Digite a quantidade de termos (mínimo 3): ");
    scanf("%d", &qnt);

    if (qnt < 3) {
      printf("A quantidade mínima de termos é 3.\n");
    }

  } while (qnt < 3);

  exibirTermos(num1, num2, i, termo, qnt);

}
