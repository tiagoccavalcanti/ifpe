// Leia um valor em real e a cotac ̧ao do d  ̃ olar. Em seguida, imprima o valor correspondente  ́em dolares.  

#include<stdio.h>

int main(){

float valorReal, cotacao, valorDolar;
printf("insira um valor em reais: ");
scanf("%f", &valorReal);
printf("insira a cotacao do dolar atual: ");
scanf("%f", &cotacao);

valorDolar = valorReal/cotacao;

printf("com a cotacao atual %.2f reais, equivale a %.2f dolares", valorReal, valorDolar);


    return 0;
}