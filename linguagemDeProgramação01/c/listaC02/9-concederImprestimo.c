// Leia o salario de um trabalhador e o valor da prestac ̧  ́ ao de um empr  ̃ estimo. Se a  ́prestac ̧ao for maior que 20% do sal  ̃ ario imprima:  ́ Empr ́estimo n~ao concedido, caso contrario imprima:  ́ Empr ́estimo concedido.

#include<stdio.h>

int main(){

    float salario, prestacao;
    printf("insira o valor do salario: ");
    scanf("%f", &salario);
    printf("insira o valor da prestacao: ");
    scanf("%f", &prestacao);

    if(prestacao > salario*0.2){
        printf("emprestimo nao concedido");
    }else{
        printf("empresstimo concedido");
    }

    return 0;
}