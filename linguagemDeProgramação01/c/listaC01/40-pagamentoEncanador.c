/* Uma empresa contrata um encanador a R$ 30,00 por dia. Fac ̧a um programa que soliciteo numero de dias trabalhados pelo encanador e imprima a quantia l  ́  ́ıquida que devera ser  ́paga, sabendo-se que sao descontados 8% para imposto de renda. */

#include<stdio.h>
#include<math.h>

int main(){

    float diasTrabalhados, pagamentoLiquido;
    printf("insira a quantidade de dias trabalhados: ");
    scanf("%f", &diasTrabalhados);

    ;
    pagamentoLiquido = (diasTrabalhados * 30) - ((diasTrabalhados * 30)*0.08);

    printf("o valor liquido a ser pago sera: %.2f", pagamentoLiquido);

    return 0;
}