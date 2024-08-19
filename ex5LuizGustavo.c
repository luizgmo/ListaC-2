#include <stdio.h>

void calcularTempo(int qntd){
    double massa;
    int tempo = 0;
    for (int i = 0; i < qntd; i++)
    {
        printf("Digite a massa inicial do material radioativo: ");
        scanf("%lf", &massa);
        while (massa >= 0.10)
        {
            massa = massa * 0.75;
            tempo += 30;
        }
        printf("O tempo necessário para que a massa do material se torne menor que 0,10 gramas é de %d segundos.\n", tempo);
    }
}

int main()
{
    int qntd;
    printf("Digite quantas vezes deseja calcular o tempo: ");
    scanf("%d", &qntd);
    calcularTempo(qntd);

    
}