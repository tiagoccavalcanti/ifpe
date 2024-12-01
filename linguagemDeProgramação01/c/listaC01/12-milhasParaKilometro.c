#include <stdio.h>

int main(){

    float kilometro, milhas;
    printf("insira um valor em milhas e receba o equivalente em quilometros: ");
    scanf("%f", &milhas);

    kilometro = 1.61*milhas;

    printf("%.2f milhas equivale a %.2f quilometros", milhas, kilometro);
    return 0;
}