#include<stdio.h>

int main(){

    int numeroDeNotas = 0, valor = 0;
    printf("isisra o valor do saque: ");
    scanf("%d", &valor);

    numeroDeNotas = valor/100;
    printf("\nserao %d notas de 100", numeroDeNotas);

    numeroDeNotas = (valor%100)/50;
    printf("\nserao %d notas de 50", numeroDeNotas);

    numeroDeNotas = ((valor%100)%50)/20;
    printf("\nserao %d notas de 20", numeroDeNotas);

    numeroDeNotas = (((valor%100)%50)%20)/10;
    printf("\nserao %d notas de 10", numeroDeNotas);

    numeroDeNotas = ((((valor%100)%50)%20)%10)/5;
    printf("\nserao %d notas de 5", numeroDeNotas);

    numeroDeNotas = (((((valor%100)%50)%20)%10)%5)/2;
    printf("\nserao %d notas de 2", numeroDeNotas);

    numeroDeNotas = (((((valor%100)%50)%20)%10)%5)%2;
    printf("\nserao %d notas de 1", numeroDeNotas);

    return 0;
}