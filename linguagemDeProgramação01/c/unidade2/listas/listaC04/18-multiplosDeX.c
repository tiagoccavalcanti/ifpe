#include<stdio.h>

int main(){
    int vetor[10], tamanho = (sizeof(vetor)/sizeof(vetor[0])), divisores[10], X;

    for (int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("insira o numero x: ");
    scanf("%d", &X);

    for (int i = 0; i < tamanho; i++)
    {
        if(vetor[i] % X == 0){
            divisores[i] = vetor[i];
        }else{
            divisores[i] = 0;
        }
    }
    
    for (int i = 0; i < tamanho; i++)
    {
        if(divisores[i]!=0)
        {
        printf("%d ", divisores[i]);
        }
    }
    
    

    return 0;
}