#include<stdio.h>

int main()
{
    float raio, perimetro;

    printf("inserir o raio da circunferencia: ");
    scanf("%f", &raio);

    perimetro = 2*3.14*raio;

    printf(" comprimento da circunferencia: %.2f", perimetro);

    return 0;
}