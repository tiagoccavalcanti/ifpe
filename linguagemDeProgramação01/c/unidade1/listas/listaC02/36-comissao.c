#include<stdio.h>

int main(){
    float valorVendas = 0, valorComissao = 0;
    printf("insira o valor das vendas mensais: ");
    scanf("%f", &valorVendas);

    if(valorVendas >= 100000){
        valorComissao = 700 + 0.16*valorVendas;
    }else if(valorVendas >= 80000 ){
        valorComissao = 650 + 0.14*valorVendas;
    }else if(valorVendas >= 60000 ){
        valorComissao = 600 + 0.14*valorVendas;
    }else if(valorVendas >= 40000 ){
        valorComissao = 550 + 0.14*valorVendas;
    }else if(valorVendas >= 20000 ){
        valorComissao = 500 + 0.14*valorVendas;
    }else{
        valorComissao = 400 + 0.14*valorVendas;
    }

    printf("a comissao sera: %.2f", valorComissao);

    return 0;
}