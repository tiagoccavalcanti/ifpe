// Leia o valor do raio de um c ́ırculo e calcule e imprima a area do c  ́  ́ırculo correspondente.A area do c  ́  ́ırculo e ́ π ∗ raio2, considere π = 3.141592.

#include<stdio.h>

int main(){

    float raio, area, pi = 3.141592;

    printf("insira o raio de um circulo: ");
    scanf("%f", &raio);

    area = pi * (raio * raio);

printf("a area do circulo em questao sera: %.2f", area);

    return 0;
}