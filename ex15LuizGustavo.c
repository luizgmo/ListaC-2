#include <stdio.h>

int calcularDigitos(int resultado, int digitos, int n, int m){
    for (int i = 0; i < m; i++) {
        resultado *= n;
    }

    do {
        digitos++;
        resultado /= 10;
    } while (resultado > 0);
    return digitos;
}

int main() {
    int n, m, resultado = 1, digitos;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &n, &m);

    digitos = calcularDigitos(resultado, digitos, n, m);

    printf("A quantidade de dígitos de %d elevado a %d é: %d\n", n, m, digitos);

    return 0;
}