#include<stdio.h>

int main(){
    int vetor[10],maior, menor; 
    
    for (int i = 0; i < 10; i++)
    {
        printf("insira o %d valor: ", i+1);
        scanf("%d", &vetor[i]);
    }
    
    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 10; i++)
    {
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i]< menor){
            menor = vetor[i];
        }
    }

    for (unsigned int i = 0; i < (sizeof(vetor)/sizeof(vetor[0])); i++)
    {
        printf("%d ", vetor[i]);
        
    }
    printf("\n%d ", maior);
    printf("\n%d ", menor);
    
    return 0;
}