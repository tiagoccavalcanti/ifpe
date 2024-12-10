// Escreva um programa que leia um numero inteiro maior do que zero e devolva, na tela, a  ́soma de todos os seus algarismos. Por exemplo, ao numero 251 corresponder  ́ a o valor  ́8 (2 + 5 + 1). Se o numero lido n  ́ ao for maior do que zero, o programa terminar  ̃ a com a  ́mensagem “Numero inv  ́ alido”.  ́

#include<stdio.h>

int main(){

    int num;

    printf("insira um numero inteiro com 3 digitos maior do que zero: ");
    scanf("%d", &num);

    if(num <= 0 ){
        printf("numero invalido!");
        return 1;
    }
    int primeiroDigito = num / 100;
    int segundoDigito = (num%100)/10;
    int terceiroDigito = (num%100)%10;

    printf("\nprimeiro digito: %d,\nsegundo digito: %d,\nterceiro digito: %d\nsomatorio: %d", primeiroDigito, segundoDigito, terceiroDigito, primeiroDigito+segundoDigito+terceiroDigito);
    return 0;
}