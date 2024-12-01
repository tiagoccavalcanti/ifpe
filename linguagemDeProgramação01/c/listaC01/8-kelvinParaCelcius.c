#include<stdio.h>

int main(){

    float tempCelcius, tempkelvin;
    
    printf("insira uma temperatura em kelvin e ela sera convertida para celcius: ");
    scanf("%f", &tempkelvin);

    tempCelcius = tempkelvin - 273.15;

    printf("%.2f kelvin sao equivalenes a %.2f gaus celcius", tempkelvin, tempCelcius);

    return 0;
}