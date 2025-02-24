#include<stdio.h>

int ehPrimo(int numero) {
    if (numero < 2) return 0;
    if (numero == 2) return 1;
    if (numero % 2 == 0) return 0;

    for (int i = 3; i * i <= numero; i += 2) {
        if (numero % i == 0) return 0;
    }
    return 1;
}

int main(){
    int vetor[10];
    int tamanho = (sizeof(vetor)/sizeof(vetor[0]));

    for(int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (ehPrimo(vetor[i]))
        {
            printf("%d --> posicao: %d\n", vetor[i], i);
        }
        
    }
    
    return 0;
}