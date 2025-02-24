#include<stdio.h>

int main(){

    float centimetros, polegadas;

    printf("insira um comprimento em polegada: ");
    scanf("%f", &polegadas);

    centimetros = polegadas * 2.54;

    printf("%.2f polegadas corresponde a %.2f centimetros", polegadas, centimetros);
    return 0;
}