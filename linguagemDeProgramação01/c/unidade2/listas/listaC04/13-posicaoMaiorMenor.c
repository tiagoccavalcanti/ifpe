#include<stdio.h>

int main(){

    int vetor[5], tamanho = (sizeof(vetor)/sizeof(vetor[0]));

    for (int i = 0; i < tamanho; i++)
    {
        printf("insira o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0], posicaoMaior = 0;
    int menor = vetor[0], posicaoMenor = 0;
    
    for (int i = 0; i < tamanho; i++)
    {
        if(vetor[i] > maior){
            maior = vetor[i];
            posicaoMaior = i;
        }
        if(vetor[i] < menor){
            menor = vetor[i];
            posicaoMenor = i;
        }
    }
    
    printf("o maior elemento do vetor eh: %d, e sua posicao serah: %d\n", maior, posicaoMaior);
    printf("o menor elemento do vetor eh: %d, e sua posicao serah: %d", menor, posicaoMenor);
    
    return 0;
}