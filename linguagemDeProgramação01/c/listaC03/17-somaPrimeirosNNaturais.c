#include<stdio.h>

int main(){
    int n = 0, soma = 0;
    while (n <= 0)
    {
        printf("insira um inteiro positivo: ");
        scanf("%d", &n);
    }

    for (int i = 0; i <= n; i++)
    {
        soma += i;
    }
    
    printf("a soma dos primeiros %d naturais sera: %d", n, soma);

    return 0;
}