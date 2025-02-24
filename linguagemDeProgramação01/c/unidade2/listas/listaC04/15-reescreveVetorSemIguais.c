#include<stdio.h>

int main(){
    int vetor[20], diferentes[20];
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    int k = 0;

    for (int i = 0; i < tamanho; i++)
    {
        printf("insira um valor: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        int repetidos = 0;

        for (int j = 0; j < i; j++)
        {
            if(vetor[i] == diferentes[j]){
                repetidos =1;
                break;
            }
        }
        
        if (!repetidos)
        {
            diferentes[k] = vetor[i];
            k++;
        }
        
        
    }

    printf("\nValores unicos: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", diferentes[i]);
    }
    
    
    return 0;
}