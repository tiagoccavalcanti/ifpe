#include <stdio.h>

int main() {
    float salarioMinimo, taxaCorrecao, salarioAtualizado;

    salarioMinimo = 1320;

    printf("Informe a taxa de correção (em %%): ");
    scanf("%f", &taxaCorrecao);

    salarioAtualizado = salarioMinimo + (salarioMinimo * (taxaCorrecao / 100));

    printf("O salário mínimo atualizado é: R$ %.2f\n", salarioAtualizado);

    return 0;
}