#include <stdio.h>

int main(){

    float kilometro, milhas;
    printf("insira um valor em quilometro e receba o equivalente em millhas: ");
    scanf("%f", &kilometro);

    milhas = kilometro/1.61;

    printf("%.2f kilometros equivale a %.2f milhas", kilometro, milhas);
    return 0;
}