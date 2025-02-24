#include <stdio.h>

int main() {
    int vetor[100];
    int numero = 1, contador = 0;

    while (contador < 100) {
        // Verifica se o número NÃO é múltiplo de 7 e NÃO termina em 7
        if (numero % 7 != 0 && numero % 10 != 7) {
            vetor[contador] = numero;
            contador++;
        }
        numero++;
    }

    // Exibição do vetor
    printf("Os primeiros 100 números que não são múltiplos de 7 nem terminam com 7:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
        if ((i + 1) % 10 == 0) { // Para melhor visualização, quebra a linha a cada 10 números
            printf("\n");
        }
    }

    return 0;
}
