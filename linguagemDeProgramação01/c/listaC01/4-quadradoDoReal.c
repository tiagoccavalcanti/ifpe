#include<stdio.h>

int main(){

    float num1;
    float quadrado;
    printf("insira um numero real ou inteiro: ");
    scanf("%f", &num1);

    quadrado = num1 * num1;

    printf("esse é o quadrado do numero inserido: %.2f", quadrado);

    return 0;
}