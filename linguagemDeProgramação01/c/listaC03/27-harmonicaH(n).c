#include<stdio.h>

int main(){

    float num = 0, funcao = 0;
    printf("insira um inteiro: ");
    scanf("%f", &num);

    for (float i = 1.0; i <= num; i++)
    {
        funcao += 1.0/i;
    }

    printf("H(n) = %.2f", funcao);
    

    return 0;
}