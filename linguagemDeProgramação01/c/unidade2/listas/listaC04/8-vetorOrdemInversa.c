#include <stdio.h>

int main() {
    int vetor[10], inverso[10];
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    for (int i = 0; i < tamanho; i++) {
        printf("Insira o %d valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    for (int i = 0; i < tamanho; i++) {
        inverso[i] = vetor[tamanho - 1 - i];
    }

    printf("\nVetor invertido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", inverso[i]);
    }

    return 0;
}
