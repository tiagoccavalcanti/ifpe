// Receba o salario-base de um funcion  ́ ario. Calcule e imprima o sal  ́ ario a receber, sabendo-se que esse funcionario tem uma gratificacao de 5% sobre o sal  ̃ ario-base. Al  ́ em disso, ele paga 7% de imposto sobre o salario-base.  

#include<stdio.h>

int main(){

    float salarioBase;

    printf("insira o salario base e calcularemos as bonificacoes e descontos: ");
    scanf("%f", &salarioBase);

    float salarioLiquido = salarioBase + (salarioBase*0.05) - (salarioBase*0.07);

    printf(
        "\n-->gratificacao: %.2f"
        "\n-->imposto sobre salario bruto: %.2f"
        "\n-->salario liquido: %.2f",
        salarioBase*0.05, -(salarioBase*0.07), salarioLiquido);

    return 0;
}