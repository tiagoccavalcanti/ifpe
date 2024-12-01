#include<stdio.h>

int main()
{
    float real, dolar;

    printf("Insira um valor em reais: ");
    scanf("%f", &real);

    dolar = real*5.81;

printf("%.2f reais corresponde a %.2f dolares", real, dolar);

    return 0;
}