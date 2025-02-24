#include<stdio.h>

int main(){

    int vetor1[10], vetor2[10], vetor3[10];
    int tamanho = sizeof(vetor1)/sizeof(vetor1[0]);
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento do vetor A: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    
    printf("\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento do vetor B: ", i+1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        if(i%2 == 0){
            vetor3[i] = vetor1[i];
        }
        if (i%2!=0)
        {
            vetor3[i] = vetor2[i];
        }
        
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor3[i]);
    }
    return 0;
}