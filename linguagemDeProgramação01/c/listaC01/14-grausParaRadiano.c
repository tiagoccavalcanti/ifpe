#include<stdio.h>

int main(){

    float graus, radianos, pi = 3.14;
    printf("insira um angulo em graus e mostrareemos em radiano: ");
    scanf("%f", &graus);

    radianos = graus* pi/180;

    printf("%f graus equivale a %f rad", graus, radianos);
    
    return 0;
}