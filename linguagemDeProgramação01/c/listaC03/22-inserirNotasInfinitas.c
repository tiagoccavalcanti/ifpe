#include<stdio.h>

int main(){
    int nota = 0, contador = 0, soma = 0;

    do
    {
        printf("insira uma nota: ");
        scanf("%d", &nota);

        soma += nota;
        contador ++;

    } while (nota >= 10 && nota <= 20);
    
    printf("a media das notas inseriadas sera: %d", soma/contador);
    return 0;
}