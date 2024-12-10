// Fac ̧a um programa para converter uma letra maiuscula em letra min  ́ uscula. Use a tabela  ́ASCII para resolver o problema.

#include<stdio.h>

int main(){

    char letra;

    printf("escreva uma letra maiuscula: ");
    scanf("%c", &letra);

    printf("%c", letra+32);

    return 0;
}