// Leia o tamanho do lado de um quadrado e imprima como resultado a sua area.  ́

#include<stdio.h>

int main(){

    float lado, area;

    printf("insira o tamanho do lado de um quadrado: ");
    scanf("%f", &lado);

    area = lado*lado;

    printf("a area do quadrado sera: %.2f", area);

    return 0;
}