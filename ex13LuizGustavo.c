#include <stdio.h>

void calcularPontos(){
  int distancia = 1;

  while ((distancia >= 0) && (distancia <= 2000)) {

    printf("Digite a distância do robô até o início da quadra: ");
    scanf("%d", &distancia);

    if ((distancia < 0) || (distancia > 2000)) {
      printf("Distância inválida\n");
      break;
    } else if (distancia <= 800) {
      printf("1 ponto\n");
    } else if ((distancia > 800) && (distancia <= 1400)) {
      printf("2 pontos\n");
    } else if ((distancia > 1400) && (distancia <= 2000)) {
      printf("3 pontos\n");
    }
  }
}

int main() {
  calcularPontos();
}