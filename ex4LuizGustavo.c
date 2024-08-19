#include <stdio.h>

int fatorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double calcularSoma() {
    double soma = 0;
    for (int i = 100, n = 0; n < 20; i--, n++) {
        soma += i / (double)fatorial(n);
    }
    return soma;
}

int main() {
    double soma = calcularSoma();

    printf("A soma é: %.10lf\n", soma);

    return 0;
}
