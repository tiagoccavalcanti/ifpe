#include<stdio.h>

int main(){
    float custoFabrica = 0, precoFinal = 0;
    printf("insira o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    if(custoFabrica <=12000){
        precoFinal = custoFabrica + custoFabrica*0.05;
    }else if(custoFabrica<=25000){
        precoFinal = custoFabrica + custoFabrica*0.10 + custoFabrica * 0.15; 
    }else{
        precoFinal = custoFabrica + custoFabrica*0.15 + custoFabrica*0.20;
    }

    printf("%.2f", precoFinal);
    return 0;
}