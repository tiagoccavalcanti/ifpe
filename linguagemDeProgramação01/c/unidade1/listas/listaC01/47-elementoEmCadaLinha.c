// Leia um numero inteiro de 4 d  ́  ́ıgitos (de 1000 a 9999) e imprima 1 d ́ıgito por linha.

#include<stdio.h>

int main(){

    int num;
    printf("insira um inteiro de quatro digitos: ");
    scanf("%d", &num);

    int primeiroDigito = num / 1000;
    int centena = num % 1000; 
    int segundoDigito = centena / 100;
    int dezena = centena % 100;
    int terceiroDigito = dezena / 10;
    int quartoDigito = dezena % 10;

    printf(
        "\n%d"
        "\n%d"
        "\n%d"
        "\n%d",
        primeiroDigito,
        segundoDigito,
        terceiroDigito,
        quartoDigito);

    return 0;
}