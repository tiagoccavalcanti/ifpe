#include<stdio.h>

int main(){
    float salarioAtual = 0, salarioAjustado = 0;
    int tempoServico = 0;

    printf("Insira o valor do salario atual: ");
    scanf("%f", &salarioAtual);
    printf("Insira o tempo de servico (em anos): ");
    scanf("%d", &tempoServico);


    if (salarioAtual <= 500) {
        salarioAjustado = salarioAtual + salarioAtual * 0.25;
    } else if (salarioAtual <= 1000) {
        salarioAjustado = salarioAtual + salarioAtual * 0.20;
    } else if (salarioAtual <= 1500) {
        salarioAjustado = salarioAtual + salarioAtual * 0.15;
    } else if (salarioAtual <= 2000) {
        salarioAjustado = salarioAtual + salarioAtual * 0.10;
    } else {
        salarioAjustado = salarioAtual;
    }

    if (tempoServico > 1 && tempoServico <= 3) {
        salarioAjustado += 100;
    } else if (tempoServico > 3 && tempoServico <= 6) {
        salarioAjustado += 200;
    } else if (tempoServico > 6 && tempoServico <= 10) {
        salarioAjustado += 300;
    } else if (tempoServico > 10) {
        salarioAjustado += 500;
    }

    printf("O salario ajustado sera: %.2f\n", salarioAjustado);

    return 0;
}
