#include<stdio.h>

int main(){

    int num = 0, maior = 0, menor = 0;
    do
    {
        printf("insira um inteiro: ");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
        }
        if((num < menor || menor == 0) && num > 0){
            menor = num;
        }

    } while (num > 0);
    
    printf("maior: %d\nmenor: %d", maior, menor);
    return 0;
}