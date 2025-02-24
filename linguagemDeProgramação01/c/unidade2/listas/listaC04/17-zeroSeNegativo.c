#include<stdio.h>

int main(){

    int vetor[10], tamanho = (sizeof(vetor)/sizeof(vetor[0]));

    for (int i = 0; i < tamanho; i++)
    {
        printf("insira o %d numero: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] < 0){
            vetor[i] = 0;
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    
    
    return 0;
}