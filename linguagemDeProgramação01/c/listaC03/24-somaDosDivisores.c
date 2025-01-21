#include<stdio.h>

int main(){

    int num = 0, soma = 0;

    do
    {
        printf("digite um inteiro positivo: ");
        scanf("%d", &num);
    }while (num <= 0);

    for (int i = 1; i < num; i++)
    {
        if(num % i == 0){
            printf("%d\n", i);
            soma += i;
        }
    }
    
    printf("a soma dos divisores de %d sera: %d", num, soma);

    return 0;
}