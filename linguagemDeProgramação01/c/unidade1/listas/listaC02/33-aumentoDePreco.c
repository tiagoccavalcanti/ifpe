#include<stdio.h>

int main(){

    float precoAntigo = 0, precoNovo = 0;

    printf("insira o preco antigo: ");
    scanf("%f", &precoAntigo);

    if(precoAntigo < 50){
        precoNovo = precoAntigo + precoAntigo*0.05;
    }else if(precoAntigo >= 50 && precoAntigo <= 100){
        precoNovo = precoAntigo + precoAntigo*0.10;
    }else{
        precoNovo = precoAntigo + precoAntigo*0.15;
    }

    if(precoNovo < 80){
        printf(" o preco novo eh: %.2f - Barato", precoNovo);
    }else if(precoNovo >= 80 && precoNovo <= 120){
        printf(" o preco novo eh: %.2f - Normal", precoNovo);
    }else if(precoNovo > 120 && precoNovo <= 200){
        printf(" o preco novo eh: %.2f - Caro", precoNovo);
    }else if(precoNovo > 200){
        printf(" o preco novo eh: %.2f - Muito caro", precoNovo);
    }

    return 0;
}