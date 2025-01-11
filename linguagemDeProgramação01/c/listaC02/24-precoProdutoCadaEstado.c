// Uma empresa vende o mesmo produto para quatro  diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Fac ̧a um programa em que o usuario entre com o valor e o estado destino do  ́produto e o programa retorne o prec ̧o final do produto acrescido do imposto do estado em que ele sera vendido. Se

#include<stdio.h>

int main(){

    float valor;
    char letra1, letra2;

    printf("insira o valor do produto que esta sendo vendido: ");
    scanf("%f", &valor);
    printf("insira o estado onde o produto esta sendo vendido: ");
    scanf(" %c%c", &letra1, &letra2);

    if(letra1 == 'M' && letra2 == 'G'){
        printf("o valor da compra sera: %.2f", valor + valor*0.07);
    }else if(letra1 == 'S' && letra2 == 'P'){
        printf("o valor da compra sera: %.2f", valor + valor*0.12);
    }else if(letra1 == 'R' && letra2 == 'J'){
        printf("o valor da compra sera: %.2f", valor + valor*0.15);
    }else if(letra1 == 'M' && letra2 == 'S'){
        printf("o valor da compra sera: %.2f", valor + valor*0.08);
    }else{
        printf("nao ha servico para este estado");
    }
}