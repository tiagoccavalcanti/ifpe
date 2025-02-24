#include<stdio.h>

int main(){
    int vetor[6];
    for (int i = 0; i < 6; i++)
    {
        printf("insira o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < (sizeof(vetor)/sizeof(vetor[0])); i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}