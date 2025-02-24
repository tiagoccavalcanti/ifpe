#include<stdio.h>

int main()
{
    float tempCelcius, tempKelvin;

    printf("Ingorme a temperatura em graus cellcius: ");
    scanf("%f", &tempCelcius);

    tempKelvin = tempCelcius + 273.15;

    printf("A temperatura equivalente em kelvin sera %.2f", tempKelvin);
    return 0;
}
