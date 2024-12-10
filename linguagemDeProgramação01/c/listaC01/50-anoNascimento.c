// Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

#include<stdio.h>

int main(){

    int idade, anoAtual;

    printf("insira sua idade: ");
    scanf("%d", &idade);
    printf("insira o ano atual: ");
    scanf("%d", &anoAtual);
    
    int anoDeNascimento = anoAtual - idade;

    printf("seu ano de nascimento e: %d", anoDeNascimento);

    return 0;
}