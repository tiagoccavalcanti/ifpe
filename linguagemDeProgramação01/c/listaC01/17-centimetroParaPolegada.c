#include<stdio.h>

int main(){

    float centimetros, polegadas;

    printf("insira um comprimento em centimetros: ");
    scanf("%f", &centimetros);

    polegadas = centimetros/2.54;

    printf("%.2f centimetros corresponde a %.2f polegadas", centimetros, polegadas);
    return 0;
}