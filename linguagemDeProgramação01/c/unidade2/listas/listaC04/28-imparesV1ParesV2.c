#include<stdio.h>

int main(){
    int vetor[10], v1[10], v2[10];
    int tamanho = (sizeof(vetor)/sizeof(vetor[0]));

    for(int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento do vetor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        if(vetor[i] % 2 != 0){
            v1[i] = vetor[i];
            v2[i] = 0;
        }
        if(vetor[i] % 2 == 0){
            v2[i] = vetor[i];
            v1[i] = 0;
        }
    }

    printf("vetor 1 --> ");
    for (int i = 0; i < tamanho; i++)
    {
        if(v1[i] != 0){
            printf("%d ", v1[i]);
        }
    }

    printf("\nvetor 2 --> ");
    for (int i = 0; i < tamanho; i++)
    {
        if(v2[i] != 0){
            printf("%d ", v2[i]);
        }
    }
    
    return 0;
}