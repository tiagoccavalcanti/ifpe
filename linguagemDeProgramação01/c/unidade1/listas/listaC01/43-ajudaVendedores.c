/* Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
• o total a pagar com desconto de 10%;
• o valor de cada parcela, no parcelamento de 3× sem juros;
• a comissao do vendedor, no caso da venda ser a vista (5% sobre o valor com des-  ̃
conto)
• a comissao do vendedor, no caso da venda ser parcelada (5% sobre o valor total) */

#include<stdio.h>

int main(){

    float valorProduto;

    printf("insira o valor do produto: ");
    scanf("%f", &valorProduto);

    printf(
        "\n-->Pagamento a vista: %.2f"
        "\n-->Valor de cada parcela (3x): %.2f"
        "\n-->Comissao a vista: %.2f"
        "\n-->Comissao parcelado: %.2f",
        valorProduto - valorProduto*0.1, valorProduto/3,
        (valorProduto - valorProduto*.1)*0.05,valorProduto*0.05);

    return 0;
}