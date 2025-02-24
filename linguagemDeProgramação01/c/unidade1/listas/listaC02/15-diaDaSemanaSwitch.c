// Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da semana correspondente a este numero. Isto e, domingo se  ́ 1, segunda-feira se 2, eassim por diante.

#include<stdio.h>

int main(){

    int num;
    printf("insira um inteiro de 1 a 7: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("segunda-feira");
        break;
    case 3:
        printf("terca-feira");
        break;
    case 4:
        printf("quarta-feira");
        break;
    case 5:
        printf("quinta-feira");
        break;
    case 6:
        printf("sexta-feira");
        break;
    case 7:
        printf("sabado");
        break;
    default:
        printf("numero invalido!");
        break;
    }

    return 0;
}