#include <stdio.h>

int main() {
    float salario, percentual, aumento, novo_salario;

    printf("Digite o sal�rio atual do funcion�rio: R$ ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    aumento = salario * percentual / 100;
    novo_salario = salario + aumento;

    printf("Valor do aumento: R$ %.f\n", aumento);
    printf("Novo sal�rio: R$ %.f\n", novo_salario);

    return 0;
}

