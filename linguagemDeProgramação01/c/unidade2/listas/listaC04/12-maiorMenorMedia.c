#include <stdio.h>

int main() {
    int vetor[5], maior = 0, menor = 0, media = 0;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < tamanho; i++) 
    {
        printf("Insira o %d valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < tamanho; i++) 
    {

        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    
        media += vetor[i];
    }

    printf("\nvetor: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    printf("\nO maior valor serah: %d", maior);
    printf("\nO menor valor serah: %d", menor);
    printf("\nA media serah: %d", media/tamanho);
    
    return 0;
}
