#include <stdio.h>

int main() {
    int vetor[10], contador = 0, somaPositivos = 0;
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < tamanho; i++) 
    {
            printf("Insira o %d valor: ", i + 1);
            scanf("%d", &vetor[i]);   
    }

    for (int i = 0; i < tamanho; i++) 
    {
        if (vetor[i] < 0)
        {
            contador ++;
        }else
        {
            somaPositivos += vetor[i];
        }
        
    }

    printf("\nvetor: ");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    printf("\n o vetor tem : %d numeros negativos\na soma dos positivos serah: %d",contador, somaPositivos);
    

    return 0;
}
