#include <stdio.h>

void pesquisaEstatistica() {
    int codigo, numVeiculos, acidentesVit, acidentesSemVit, i;
    int indiceMaisVit = 0, cidadeMaisVit;
    int indiceMenosVit = 99999, cidadeMenosVit;
    int contadorVeiculos = 0, contador5000 = 0, contadorCidades5000 = 0;
    float mediaVeiculos, media5000;

    for (i = 0; i < 5; i++) {
        printf("Digite o código da cidade: ");
        scanf("%d", &codigo);
        printf("Digite o número de veículos de passeio: ");
        scanf("%d", &numVeiculos);
        printf("Digite o número de acidentes de trânsito com vítimas: ");
        scanf("%d", &acidentesVit);
        printf("Digite o número de acidentes de trânsito sem vítimas: ");
        scanf("%d", &acidentesSemVit);
        printf("\n");

        // O maior e o menor índices de acidentes de trânsito com vítimas e a que cidade pertencem
        if (acidentesVit > indiceMaisVit) {
            indiceMaisVit = acidentesVit;
            cidadeMaisVit = codigo;
        }
        if (acidentesVit < indiceMenosVit) {
            indiceMenosVit = acidentesVit;
            cidadeMenosVit = codigo;
        }

        // A média de veículos nas cinco cidades juntas
        contadorVeiculos += numVeiculos;
    }

    mediaVeiculos = contadorVeiculos / 5.0;

    // A média de acidentes de trânsito (com ou sem vítimas) nas cidades com menos de 5000 veículos de passeio
    if (numVeiculos < 5000) {
        contadorCidades5000++;
        contador5000 += acidentesVit;
        contador5000 += acidentesSemVit;
    }

    if (contadorCidades5000 > 0) {
        media5000 = contador5000 / (float)contadorCidades5000;
    } else {
        media5000 = 0.0;
    }

    printf("Cidade com maior índice de acidentes com vítimas: %d com %d acidentes\n", cidadeMaisVit, indiceMaisVit);
    printf("Cidade com menor índice de acidentes com vítimas: %d com %d acidentes\n", cidadeMenosVit, indiceMenosVit);
    printf("A média de veículos nas cinco cidades juntas é de %.2f\n", mediaVeiculos);
    printf("A média de acidentes de trânsito nas cidades com menos de 5000 veículos é de %.2f\n", media5000);
}

int main() {
    pesquisaEstatistica();
    return 0;
}
