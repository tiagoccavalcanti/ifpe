// Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

#include<stdio.h>

int main(){

    int segundos;

    printf("insira um horario em segundos: ");
    scanf("%d", &segundos);

    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int segundosreais = (segundos % 3600) % 60;

    printf("\nhoras: %d\nminutos: %d\nsegundos: %d", horas, minutos, segundosreais);

    return 0;
}