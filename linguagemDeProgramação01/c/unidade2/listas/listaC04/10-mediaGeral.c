#include <stdio.h>

int main() {
    int vetor[15];
    float soma = 0;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < tamanho; i++) 
    {
        do
        {
            printf("Insira o %d valor: ", i + 1);
            scanf("%d", &vetor[i]);
        } while (vetor[i] < 0 || vetor[i] > 10);
        
    }

    for (int i = 0; i < tamanho; i++) 
    {
        soma += vetor[i];
    }

    printf("\nvetor: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    printf("\na media da turma seraa: %.2f", soma/tamanho);
    

    return 0;
}
