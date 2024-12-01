#include<stdio.h>

int main(){

    float tempCelcius, tempFahrenheit;

    printf("insira uma temperatura em fahrenheit e ela sera transformada em celcius: ");
    scanf("%f", &tempFahrenheit);

    tempCelcius = 5*(tempFahrenheit - 32)/9;

    printf("%.2f fahrenheit equivale a %.2f graus celcius", tempFahrenheit, tempCelcius);

    return 0;
}