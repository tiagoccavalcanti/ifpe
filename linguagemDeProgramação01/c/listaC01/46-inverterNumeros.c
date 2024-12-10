/* Fac ̧a um programa que leia um numero inteiro positivo de tr  ́ es d ˆ  ́ıgitos (de 100 a 999). Gere outro numero formado pelos d  ́  ́ıgitos invertidos do numero lido. Exemplo: 3

NumeroLido = 123  ́
NumeroGerado = 321.  ́ */

#include<stdio.h>

int main(){

    int num;

    printf("insira um numero de 3 digitos: ");
    scanf("%d", &num);

    int primeiroDigito = num / 100;
    int dezena = num % 100;
    int segundoDigito = dezena / 10;
    int terceiroDigito = dezena % 10;

    printf("o novo numero sera: %d%d%d", terceiroDigito, segundoDigito, primeiroDigito);

    return 0;
    /* int num;

    printf("insira um numero de 3 digitos: ");
    scanf("%d", &num);
    
    int dezena = num % 100;

    printf("o novo numero sera: %d%d%d", dezena % 10, dezena / 10, num / 100);

    return 0; */
}