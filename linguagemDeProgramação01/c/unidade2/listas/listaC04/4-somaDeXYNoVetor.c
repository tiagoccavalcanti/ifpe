#include<stdio.h>

int main(){
    int vetor[8], X, Y;

    for (unsigned int i = 0; i < (sizeof(vetor)/sizeof(vetor[0])); i++)
    {
        printf("insira o %d elemento do vetor: ", i+1);
        scanf("%d", &vetor[i]);

    }
    do{
    printf("insira o valor de X: ");
    scanf("%d", &X);
    printf("insira o valor de Y: ");
    scanf("%d", &Y);
    }while ((X<0||X>8)||(Y<0||Y>8));
    
    printf("a soma correspondente as posicoes VETOR[%d] E VETOR[%d] sera: %d", X, Y, vetor[X]+vetor[Y]);

    return 0;
}