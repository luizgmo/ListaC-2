#include <stdio.h>

void calcularOpiniao(){
    int opiniao = -1, idade, qntRegular = 0, qntBom = 0, contadorOtimo = 0, contadorTotal = 0;
    float mediaOtimo = 0, porcentagemBom;

    while (opiniao != 0)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite a opinião (3 - Ótimo, 2 - Bom, 1 - Regular, 0 - Sair): ");
        scanf("%d", &opiniao);

        if (opiniao == 3) {
            mediaOtimo += idade;
            contadorOtimo++;
            contadorTotal++;
        } else if (opiniao == 2) {
            qntBom++;
            contadorTotal++;
        } else if (opiniao == 1) {
            qntRegular++;
            contadorTotal++;
        }
    }

    if (contadorOtimo > 0) {
        mediaOtimo /= contadorOtimo;
    } else {
        mediaOtimo = 0;
    }

    if (contadorTotal > 0) {
        porcentagemBom = (qntBom * 100.0) / contadorTotal;
    } else {
        porcentagemBom = 0;
    }

    printf("A média das idades das pessoas que responderam ótimo é %.2f\n", mediaOtimo);
    printf("A quantidade de pessoas que responderam regular é %d\n", qntRegular);
    printf("A porcentagem de pessoas que responderam bom é %.2f%%\n", porcentagemBom);
}

int main()
{
    calcularOpiniao();
    return 0;
}
