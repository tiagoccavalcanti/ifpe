#include<stdio.h>

int main(){
    int num = 0, soma = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("digite um numero para ser somado: ");
        scanf("%d", &num);
        soma += num;
    }
    
    printf("%d", soma);
    return 0;
}