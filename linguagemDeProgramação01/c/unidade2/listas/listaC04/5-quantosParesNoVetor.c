#include<stdio.h>

int main(){
    int vetor[10], contador = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("insira o %d valor: ", i+1);
        scanf("%d", &vetor[i]);

        /* if(vetor[i]%2 == 0){
            contador++;
        } */
    }

    for (int i = 0; i < 10; i++){
        if(vetor[i]%2 == 0){
            contador++;
        }
    }
    
    printf("nesse vetor temos %d numeros pares", contador);
    return 0;
}