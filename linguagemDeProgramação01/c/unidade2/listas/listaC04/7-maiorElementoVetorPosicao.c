#include<stdio.h>

int main(){
    int vetor[10], maior = 0, posicao = 0;
    
    for (int i = 0; i < 10; i++)
    {
        printf("insira o %d valor: ", i+1);
        scanf("%d", &vetor[i]);

        if(vetor[i] > maior){
            maior = vetor[i];
            posicao = i;
        }
    }

    for (unsigned int i = 0; i < (sizeof(vetor)/sizeof(vetor[0])); i++)
    {
        printf("%d ", vetor[i]);
        
    }
    printf("\n%d ", maior);
    printf("\nPosicao vetor[%d] ", posicao);
    
    return 0;
}