//Fac ̧a a leitura de tres valores e apresente como resultado a soma dos quadrados dos tres valores lidos. //

#include<stdio.h>

int main(){

    float valor1, valor2, valor3;

    printf("insira tres valores: ");
    scanf("%f", &valor1);
    scanf("%f", &valor2);
    scanf("%f", &valor3);

    valor1 = valor1*valor1;
    valor2 = valor2*valor2;
    valor3 = valor3*valor3;

    printf("o quadrado dos valores inseridos sera: %.2f, %.2f e %.2f e a soma desses valores e: %.2f",valor1, valor2, valor3, valor1+valor2+valor3 );

    return 0;
}