#include <stdio.h>

int main() {
    int vetor[6], aux = 0;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < tamanho; i++) 
    {
        do
        {
            printf("Insira o %d valor: ", i + 1);
            scanf("%d", &vetor[i]);
        } while (vetor[i]%2 != 0);
        
    }

    printf("\nVetor: ");
    for (int i = 0; i < tamanho; i++) 
    {
        printf("%d ", vetor[i]);
    }

    for (int i = 0; i < tamanho/2 ; i++)
    {
        aux = vetor[i];
        vetor[i] = vetor[tamanho - i - 1];
        vetor[tamanho - i - 1] = aux;
    }

    printf("\nvetor invertido: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    

    return 0;
}
