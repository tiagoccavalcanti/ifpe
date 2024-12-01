// Leia quatro notas, calcule a media aritm  ́ etica e imprima o resultado.

#include<stdio.h>

int main(){

float nota1, nota2, nota3, nota4;

printf("insira 4 notas: ");
scanf("%f", &nota1);
scanf("%f", &nota2);
scanf("%f", &nota3);
scanf("%f", &nota4);

float media = (nota1+nota2+nota3+nota4)/4;

printf("a media das notas inseridadas e: %.2f", media);

    return 0;
}