#include<stdio.h>

int main(){

    float kilometroHora, metroSegundo;
    
    printf("insira uma velocidade em km/h e ela sera convertida para m/s: ");
    scanf("%f", &kilometroHora);

    metroSegundo = kilometroHora/3.6;

    printf("%.2f km/h sao equivalenes a %.2f m/s", kilometroHora, metroSegundo);

    return 0;
}