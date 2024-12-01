#include<stdio.h>

int main(){

    float kilometroHora, metroSegundo;
    
    printf("insira uma velocidade em m/s e ela sera convertida para km/h: ");
    scanf("%f", &metroSegundo);

    kilometroHora = metroSegundo * 3.6;

    printf("%.2f m/s sao equivalenes a %.2f km/h", metroSegundo, kilometroHora);

    return 0;
}