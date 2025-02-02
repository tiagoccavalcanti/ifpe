#include<stdio.h>

int main(){

    float chico = 1.50, ze = 1.10;
    int contador = 0;

    while(chico > ze){

        chico += 0.02;
        ze += 0.03;

        contador ++;
    }

    printf("serao necessarios %d anos para que ze seja maior que chico", contador);
    return 0;
}