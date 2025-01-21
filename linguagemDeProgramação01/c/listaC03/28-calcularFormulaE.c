#include<stdio.h>

int main(){
    int num =0;
    float funcao = 1, fatorial = 1;
    printf("insira um inteiro: ");
    scanf("%d", &num);

    for (float i = 1.0; i <= num; i++)
    {
        funcao += 1.0/(fatorial*=i);
    }

    printf("H(n) = %.6f", funcao);
    

    return 0;
}