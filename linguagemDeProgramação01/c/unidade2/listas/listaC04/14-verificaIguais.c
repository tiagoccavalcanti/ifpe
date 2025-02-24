#include<stdio.h>

int main(){
    int vetor[10], iguais[10];
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    int k = 0;

    for (int i = 0; i < tamanho; i++)
    {
        printf("insira um valor: ");
        scanf("%d", &vetor[i]);

        for (int j = 0; j < i; j++)
        {
            if(vetor[i] == vetor[j]){
                iguais[k] = vetor[i];
                k++;
            }
            
        }
        
    }
    printf("\niguais: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", iguais[i]);
    }
    
    
    return 0;
}