#include<stdio.h>

int main(){
    float distancia = 0, litrosDeGasolina = 0, consumo = 0;

    printf("insira a disstancia em quilometros: ");
    scanf("%f", &distancia);
    printf("insira a quantidade de combustivel utilizada: ");
    scanf("%f", &litrosDeGasolina);

    consumo = distancia/litrosDeGasolina;

    if(consumo < 8){
        printf("seu consumo eh de %.2fkm/l\nVenda o carro!",consumo);
    }if(consumo >= 8 && consumo < 12){
        printf("seu consumo eh de %.2fkm/l\nEconomico!",consumo);
    }if(consumo > 12){
        printf("seu consumo eh de %.2fkm/l\nSuper economico!",consumo);
    }
    return 0;
}