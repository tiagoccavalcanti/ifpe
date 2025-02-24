#include<stdio.h>

int main(){

    int numerosLidos = 0, maior = 0, num = 0, contador = 1;

    while (numerosLidos<=0){
        printf("insira a quantidade de numeros a serem lidos: ");
        scanf("%d", &numerosLidos);
    }

    for (int i = 0; i < numerosLidos; i++){
        printf("insira o numero a ser comparado: ");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
            contador = 1;
        }
        if(num == maior){
            contador ++;
        }
    }
    printf(" o maior numero digotado foi %d, e ele foi digitado %d vezes", maior, contador);
    
    return 0;
}