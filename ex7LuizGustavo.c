#include <stdio.h>

int converterMeses(int idadeAnos) {
    return idadeAnos * 12;
}

int converterDias(int idadeAnos) {
    return idadeAnos * 365;
}

int main() {
    int idadeAnos, idadeMeses, idadeDias;

    printf("Digite a idade em anos: ");
    scanf("%d", &idadeAnos);

    idadeMeses = converterMeses(idadeAnos);

    idadeDias = converterDias(idadeAnos);

    printf("A idade em meses e dias é: %d meses e %d dias.\n", idadeMeses, idadeDias);

    return 0;
}