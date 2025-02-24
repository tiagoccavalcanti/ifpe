#include<stdio.h>

int main()
{
    float raio, area;

    printf("inserir o raio da circunferencia: ");
    scanf("%f", &raio);

    area = 2*3.14*raio*raio;

    printf("Area da circunferencia: %.2f", area);

    return 0;
}