#include<stdio.h>

int main(){
    int vetor[6], somaPares = 0, contador = 0;
    int tamanho = (sizeof(vetor)/sizeof(vetor[0]));

    for(int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nnumeros pares --> ");
    for(int i = 0; i < tamanho; i++)
    {
        if(vetor[i] % 2 == 0){
            printf("%d ", vetor[i]);
            somaPares += vetor[i];
        }    
    }

    printf("\nSoma dos numeros pares --> %d", somaPares);

    printf("\nnumeros impares --> ");
    for(int i = 0; i < tamanho; i++)
    {
        if(vetor[i] % 2 != 0){
            printf("%d ", vetor[i]);
            contador++;
        }    
    }
    
    printf("\nquantidade de impares--> %d", contador);
    return 0;
}