// Fac ̧a um programa que leia o valor da hora de trabalho (em reais) e numero de horas  ́trabalhadas no mes. Imprima o valor a ser pago ao funcion ˆ ario, adicionando 10% sobre o valor calculado.

#include<stdio.h>

int main(){

    float horasTrabalhadas, valorDaHora;

    printf("insira o valor da hora de trabalho: ");
    scanf("%f", &valorDaHora);
    printf("insira a quantidade de horas trabalhadas nesse mes: ");
    scanf("%f", &horasTrabalhadas);

    printf(
    "\no pagamento desse mes sera: %.2f"
    "\n  sendo:\n ->quantidade de horas trabalhadas: %.2f"
    "\n ->valor da hora: %.2f", horasTrabalhadas*valorDaHora*0.1+(horasTrabalhadas*valorDaHora), horasTrabalhadas, valorDaHora);

    return 0;
}