// Fac ̧a um programa para leia o horario (hora, minuto e segundo) de inicio e a durac ̧  ́ ao, em  ̃segundos, de uma experiencia biol ˆ ogica. O programa deve resultar com o novo hor  ́ ario (hora, minuto e segundo) do termino da mesma.

#include<stdio.h>

int main(){

    int inicio, duracao;

    printf("insira o horario de inicio da experiencia: ");
    scanf("%d", &inicio);
    printf("insira a duracao da experiencia: ");
    scanf("%d", &duracao);

    int horaInicio = inicio/3600;
    int minutosInicio = (inicio%3600)/60;
    int segundosInicio = (inicio%3600)%60;

    int tempoTotal = inicio + duracao;

    int horaToral = tempoTotal / 3600;
    int minutosTotal = (tempoTotal % 3600) / 60;
    int segundosTotal = (tempoTotal % 3600) % 60;

    int horasDuracao = horaToral - horaInicio;
    int minutosDuracao = minutosTotal - minutosInicio;
    int segundosDuracao = segundosTotal - segundosInicio;

    printf("a experiencia teve inicio: %d:%d:%d, e terminou: %d:%d:%d",
    horaInicio, minutosInicio, segundosInicio, horasDuracao, minutosDuracao, segundosDuracao);

    return 0;
}