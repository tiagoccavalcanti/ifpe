// Fac ̧a um programa que receba dois numeros e mostre o maior. Se por acaso, os dois  ́numeros forem iguais, imprima a mensagem  ́ N ́umeros iguais.

#include<stdio.h>

int main(){

    int num1, num2;
    printf("escreva o primeiro numero: ");
    scanf("%d", &num1);
    printf("escreva o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("o numero %d e maior que o numero %d, e a diferenca entre eles e: %d",num1, num2, num1-num2);
    }else if(num2 > num1){
        printf("o numero %d e maior que o numero %d, e a diferenca entre eles e: %d",num2, num1, num2-num1);
    }else{
        printf("os numeros sao iguais");
    }
    return 0;
}