#include<stdio.h>

int main(){

    int num1, num2;

    printf("escreva o primeiro numero inteiro para ser comparado: ");
    scanf("%d", &num1);
    printf("escreva o segundo numero inteiro para ser comparado: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("%d é maior que %d", num1, num2);
    }
    else{
        printf("%d é maior que %d", num2, num1);
    }
    return 0;
}