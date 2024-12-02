// Fac ̧a um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista que o desconto foi de 12%

#include<stdio.h>
#include<math.h>

int main(){

    float valorProduto, valorComDesconto;

    printf("insira o valor de um produto: ");
    scanf("%f", &valorProduto);

    valorComDesconto = valorProduto - (valorProduto * 0.12);

    printf("o valor com desconto sera: %.2f", valorComDesconto);

    return 0;
}