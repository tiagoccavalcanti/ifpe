// Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles,  ́assim como a diferenc ̧a existente entre ambos.

#include<stdio.h>

int main(){

    int num1, num2;
    printf("escreva o primeiro numero: ");
    scanf("%d", &num1);
    printf("escreva o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("o numero %d e maior que o numero %d, e a diferenca entre eles e: %d",num1, num2, num1-num2);
    }else{
        printf("o numero %d e maior que o numero %d, e a diferenca entre eles e: %d",num2, num1, num2-num1);
    }
    return 0;
}