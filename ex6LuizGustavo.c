#include <stdio.h>
#include <string.h>

void contador()
{
    int codigo, idade, sexo, salario;
    char nome[50];
    int contadorCodigo = 0, contadorJose = 0, contadorIdade = 0, contadorSexo = 0, contadorSalario = 0;
    for (int i = 0; i < 30; i++)
    {
        printf("\nDigite o código do funcionário: ");
        scanf("%d", &codigo);
        printf("\nDigite o nome do funcionário: ");
        scanf("%s", &nome);
        printf("\nDigite a idade do funcionário: ");
        scanf("%d", &idade);
        printf("\nDigite o sexo do funcionário(1 - Masculino, 2 - Feminino): ");
        scanf("%d", &sexo);
        printf("\nDigite o salário do funcionário: ");
        scanf("%d", &salario);
        if (codigo < 100)
        {
            contadorCodigo++;
        }
        if (strcmp(nome, "José") == 0)
        {
            contadorJose++;
        }
        if (idade > 60)
        {
            contadorIdade++;
        }
        if (sexo == 2)
        {
            contadorSexo++;
        }
        if (salario >= 1000 && salario <= 2000)
        {
            contadorSalario++;
        }
    }
    printf("Quantidade de funcionários com código inferior a 100: %d\n", contadorCodigo);
    printf("Quantidade de funcionários que se chamam José: %d\n", contadorJose);
    printf("Quantidade de funcionários com idade superior a 60 anos: %d\n", contadorIdade);
    printf("Quantidade de funcionários do sexo feminino: %d\n", contadorSexo);
    printf("Quantidade de funcionários que recebem um salário entre R$ 1000,00 e R$ 2000,00 reais: %d\n", contadorSalario);
}

int main()
{
    contador();
    return 0;
}