#include <stdio.h>

void calcularTentativas(){
  int tentativas;
  float tempo, menor;

  do {
    printf("Digite o número de tentativas (2 - 99) / 0 para finalizar: \n");
    scanf("%d", &tentativas);

    if (tentativas >= 2 && tentativas <= 99) {
      menor = 11.0;
      int tentativaValida = 0;

      for (int i = 0; i < tentativas; i++) {
        printf("Digite o tempo (9 - 11): \n");
        scanf("%f", &tempo);

        if (tempo >= 9 && tempo <= 11) {
          tentativaValida = 1;
          if (tempo < menor) {
            menor = tempo;
          }
        } else {
          printf("Tempo inválido. Tente novamente.\n");
        }
      }

      if (tentativaValida) {
        printf("Menor tempo: %.2f\n", menor);
      } else {
        printf("Nenhum tempo válido foi inserido.\n");
      }
    } else if (tentativas != 0) {
      printf("Número de tentativas inválido. Deve estar entre 2 e 99.\n");
    }
  } while (tentativas != 0);
}

int main() {
  calcularTentativas();
}