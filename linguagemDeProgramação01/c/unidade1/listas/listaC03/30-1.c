#include<stdio.h>

int main(){

    int n = 0, soma = 0;
    printf("insira o valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }

    printf("%d", soma);
    

    return 0;
}