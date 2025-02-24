#include<stdio.h>

int main(){

    float graus, radianos, pi = 3.14;
    printf("insira um angulo em radiano e mostraremos em graus: ");
    scanf("%f", &radianos);

    graus = radianos* 180/pi;

    printf("%f graus equivale a %f rad", graus, radianos);
    
    return 0;
}