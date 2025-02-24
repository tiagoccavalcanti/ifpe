#include<stdio.h>

int main(){

    float tempCelcius, tempkelvin;
    
    printf("insira uma temperatura em celcius e ela sera convertida para kelvin: ");
    scanf("%f", &tempCelcius);

    tempkelvin = tempCelcius + 273.15;

    printf("%.2f graus celcius sao equivalenes a %.2f kelvin", tempCelcius, tempkelvin);

    return 0;
}