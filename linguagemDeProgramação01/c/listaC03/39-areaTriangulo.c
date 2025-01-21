#include<stdio.h>

int main(){

    int base = 0, altura = 0;

    do
    {
        printf("insira a base e a altura de um triangulo: ");
        scanf("%d %d", &base, &altura);

    } while (base <= 0 || altura <= 0);

        printf("A area do triangulo e: %.2f", (base*altura)/2.0 );

    return 0;
}