#include<stdio.h>
#include<math.h>

int main(){

    float vetor[10], m = 0, somatorio = 0;
    int n = (sizeof(vetor)/sizeof(vetor[0]));

    for(int i = 0; i < n; i++)
    {
        printf("insira o %d elemento do vetor: ", i+1);
        scanf("%f", &vetor[i]);

        m += vetor[i];
    }

    m /= n;

    for (int i = 0; i < n; i++)
    {
        somatorio += (vetor[i] - m)*(vetor[i] - m);
    }
    
    printf("desvio padrao = %.5f", sqrt(somatorio/(n-1)));
    return 0;
}