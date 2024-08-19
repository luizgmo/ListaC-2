#include <stdio.h>

void exibirMenu() {
    printf("Salgados\n");
    printf("1 - Coxinha (frango) - R$ 8,50\n");
    printf("2 - Enrolado (presunto e queijo) - R$ 8,50\n");
    printf("3 - Bola1 (frango e catupiry) - R$ 8,80\n");
    printf("4 - Bola2 (brócolis e catupiry) - R$ 8,80\n");
    printf("5 - Bola3 (camarão) - R$ 12,00\n");
    printf("6 - Bola4 (queijo e catupiry) - R$ 11,50\n");
    printf("\nBebidas\n");
    printf("7 - Água - R$ 4,00\n");
    printf("8 - Água com gás - R$ 4,50\n");
    printf("9 - Refrigerante - R$ 7,00\n");
    printf("10 - Suco (lata) - R$ 7,50\n");
    printf("11 - Cerveja - R$ 8,00\n");
}

float calcularTotal(int codigo) {
    switch(codigo) {
        case 1: 
          printf("Coxinha (frango) - R$ 8,50\n"); 
          return 8.50;
        case 2: 
          printf("Enrolado (presunto e queijo) - R$ 8,50\n"); 
          return 8.50;
        case 3: 
          printf("Bola1 (frango e catupiry) - R$ 8,80\n"); 
          return 8.80;
        case 4: 
          printf("Bola2 (brócolis e catupiry) - R$ 8,80\n"); 
          return 8.80;
        case 5: 
          printf("Bola3 (camarão) - R$ 12,00\n"); 
          return 12.00;
        case 6: 
          printf("Bola4 (queijo e catupiry) - R$ 11,50\n"); 
          return 11.50;
        case 7: 
          printf("Água - R$ 4,00\n"); 
          return 4.00;
        case 8: 
          printf("Água com gás - R$ 4,50\n"); 
          return 4.50;
        case 9: 
          printf("Refrigerante - R$ 7,00\n"); 
          return 7.00;
        case 10: 
          printf("Suco (lata) - R$ 7,50\n"); 
          return 7.50;
        case 11: 
          printf("Cerveja - R$ 8,00\n"); 
          return 8.00;
        case 0: 
          printf("Pedido finalizado\n"); 
          return 0;
        default: 
          printf("Código inválido! Tente novamente.\n"); 
          return 0;
    }
}

float calcularPagamento(float total, int pagamento) {
    switch(pagamento) {
        case 1: 
          return total;
        case 2: 
          return total + total * 0.03;
        case 3: 
          return total + total * 0.05;
        case 4: 
          return total + total * 0.1;
        default: printf("Forma de pagamento inválida!\n"); 
          return 0;
    }
}

void calcularTroco(float total) {
    float valor;
    printf("Digite o valor que entregará: \n");
    scanf("%f", &valor);
    if (valor >= total) {
        printf("Troco: R$ %.2f\n", valor - total);
    } else {
        printf("Valor insuficiente!\n");
    }
}

int main() {
    int codigo = -1, pagamento;
    float total = 0.0;

    exibirMenu();
    printf("Digite os produtos escolhidos (separados por ENTER / 0 para finalizar):\n");

    while (codigo != 0) {
        scanf("%d", &codigo);
        total += calcularTotal(codigo);
    }

    printf("1 - Total a pagar em dinheiro: R$ %.2f\n", total);
    printf("2 - Total a pagar no débito: R$ %.2f\n", total + total * 0.03);
    printf("3 - Total a pagar no crédito: R$ %.2f\n", total + total * 0.05);
    printf("4 - Total a pagar no crédito em 2x: R$ %.2f\n", total + total * 0.1);
    printf("Escolha sua forma de pagamento: \n");
    scanf("%d", &pagamento);

    float valorFinal = calcularPagamento(total, pagamento);
    printf("Valor final: R$ %.2f\n", valorFinal);

    if (pagamento == 1) {
        calcularTroco(total);
    }

    return 0;
}
