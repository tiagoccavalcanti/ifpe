#include<stdio.h>

int main(){

    int vetor1[5], vetor2[5], produtoEscalar = 0;
    int tamanho = sizeof(vetor1)/sizeof(vetor1[0]);
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento do vetor A: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    
    printf("\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento do vetor B: ", i+1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        produtoEscalar += vetor1[i]*vetor2[i];
    }
    
    printf("\nvetor1: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor1[i]);
    }
    
    printf("\nvetor2: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor2[i]);
    }

    printf("\nproduto escalar: %d", produtoEscalar);
    return 0;
}