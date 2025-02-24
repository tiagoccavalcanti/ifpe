#include<stdio.h>

int main(){
    int vetor[50], tamanho = (sizeof(vetor)/sizeof(vetor[0]));

    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = ((i+5*i)%(i+1));
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ",vetor[i]);
    }
    
    

    return 0;
}