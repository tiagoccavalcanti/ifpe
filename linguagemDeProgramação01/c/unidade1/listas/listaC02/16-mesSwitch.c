// Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mesˆcorrespondente a este numero. Isto e, janeiro se  ́ 1, fevereiro se 2, e assim por diante.

#include<stdio.h>

int main(){

    int num;

    printf("insira um inteiro de entre 1 e 12: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("janeiro"); 
        break;
    case 2:
        printf("fevereiro"); 
        break;
    case 3:
        printf("marco"); 
        break;
    case 4:
        printf("abril"); 
        break;
    case 5:
        printf("maio"); 
        break;
    case 6:
        printf("junho"); 
        break;
    case 7:
        printf("julho"); 
        break;
    case 8:
        printf("agosto"); 
        break;
    case 9:
        printf("setembro"); 
        break;
    case 10:
        printf("outubro"); 
        break;
    case 11:
        printf("novembro"); 
        break;
    case 12:
        printf("dezembro"); 
        break;
    default:
        printf("numero invalido");
        break;
    }
    return 0;
}