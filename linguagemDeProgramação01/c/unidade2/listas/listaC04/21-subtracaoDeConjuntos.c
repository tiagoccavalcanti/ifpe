#include<stdio.h>

int main(){
    int A[10], B[10], C[10];
    int tamanho = sizeof(A)/sizeof(A[0]);
    
    for (int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento do vetor A: ", i+1);
        scanf("%d", &A[i]);
    }
    
    printf("\n");

    for (int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento do vetor B: ", i+1);
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
     C[i] = A[i]-B[i];   
    }

    printf("\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", C[i]);
    }

    return 0;
}
    
    