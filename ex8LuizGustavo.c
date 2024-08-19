#include <stdio.h>

void campeonato(){
    int idade, peso, altura, contadorIdade = 0, contadorPeso = 0;
      float mediaIdade = 0, mediaPeso = 0;
      int times = 3, jogadores = 6 ;

      for (int i = 1; i <= times; i++) {
        printf("Time %d\n", i);

        for (int j = 1; j <= jogadores; j++) {
          do {
            printf("Digite a idade do jogador %d: ", j);
            scanf("%d", &idade);
            if (idade < 8 || idade > 15) {
              printf("Idade inválida. A idade deve estar entre 8 e 15 anos.\n");
            }
          } while (idade < 8 || idade > 15);
          printf("Digite o peso do jogador %d: ", j);
          scanf("%d", &peso);
          printf("Digite a altura do jogador %d: ", j);
          scanf("%d", &altura);
          printf("\n");

            // Jogadores com menos de 15 anos
            if (idade < 15) {
                contadorIdade++;
            }

            // Média de idade dos jogadores de cada time
            mediaIdade += idade;

            // Média do peso dos jogadores do campeonato
            mediaPeso += peso;

            // Porcentagem de jogadores com mais de 45kg do campeonato
            if (peso > 45){
                contadorPeso++;
            }
        }

        printf("A média de idade do time %d é %.2f\n", i, mediaIdade / jogadores);
        printf("\n");
        mediaIdade = 0;
      }

        printf("Quantidade de jogadores com menos de 15 anos: %d\n", contadorIdade);
        printf("Média do peso dos jogadores do campeonato: %.2f\n", mediaPeso / (times * jogadores));
        printf("Porcentagem de jogadores com mais de 45kg do campeonato: %.2f%%\n", (float)contadorPeso / (times * jogadores) * 100);
}

int main() {
  campeonato();
}