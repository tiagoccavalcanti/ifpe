#include<stdio.h>

int main(){

    float tempCelcius, tempFahrenheit;
    
    printf("insira uma temperatura em celcius e ela sera convertida para fahrenheit: ");
    scanf("%f", &tempCelcius);

    tempFahrenheit = tempCelcius * 1.8 + 32;

    printf("%.2f graus celcius sao equivalenes a %.2f fahrenheit", tempCelcius, tempFahrenheit);

    return 0;
}