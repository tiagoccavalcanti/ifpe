#include<stdio.h>

int main(){

    int codigo = 0, quantidade = 0;
    float total;

    printf("insira o codigo do pedido: ");
    scanf("%d", &codigo);
    printf("insira a quatidade de itens do pedido: ");
    scanf("%d", &quantidade);
    switch (codigo)
    {
    case 100:
        total = quantidade*1.20;
        break;
    case 101:
        total = quantidade*1.30;
        break;
    case 102:
        total = quantidade*1.50;
        break;
    case 103:
        total = quantidade*1.20;
        break;
    case 104:
        total = quantidade*1.70;
        break;
    case 105:
        total = quantidade*2.20;
        break;
    case 106:
        total = quantidade*1.00;
        break;
    default:
        printf("codigo nao encontrado!");
        break;
    }

    printf("o total da compra sera: %.2f", total);
    return 0;
}