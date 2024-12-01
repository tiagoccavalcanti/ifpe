#include<stdio.h>

int main(){

    float num1;
    float quintaParte;
    printf("insira um numero real ou inteiro: ");
    scanf("%f", &num1);

    quintaParte = num1/5;

    printf("esse é o quadrado do numero inserido: %.2f", quintaParte);

    return 0;
}