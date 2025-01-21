#include<stdio.h>

int main(){
    int maior = 0, menor = 0, num = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("insira um inteiro: ");
        scanf("%d", &num);

        if(num >= maior){
            maior = num;
        }
        if(menor == 0 || num < menor){
            menor = num;
        }
    }

    printf("maior: %d\nmenor: %d", maior, menor);
    
    return 0;
}