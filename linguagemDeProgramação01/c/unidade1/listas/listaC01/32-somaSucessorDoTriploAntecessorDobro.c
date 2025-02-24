// Leia um numero inteiro e imprima a soma do sucessor de seu triplo com o antecessor de  ́seu dobro.

#include<stdio.h>

int main(){

    int sucessorDoTriplo, num, antecessorDoDobro, result;
    
    printf("insira um numero inteiro: ");
    scanf("%d", &num);

    sucessorDoTriplo = num * 3 + 1;
    antecessorDoDobro = num *2 - 1;

    result = sucessorDoTriplo + antecessorDoDobro;

    printf("o resultado da operacao e: %d", result);

    return 0;
}