#include <stdio.h>

int main() {
    float salario, percentual, aumento, novo_salario;

    printf("Digite o salário atual do funcionário: R$ ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    aumento = salario * percentual / 100;
    novo_salario = salario + aumento;

    printf("Valor do aumento: R$ %.f\n", aumento);
    printf("Novo salário: R$ %.f\n", novo_salario);

    return 0;
}

