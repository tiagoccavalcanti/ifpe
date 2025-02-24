// Faça um programa que some todos os números naturais abaixo de 500 que são múltiplos de 4 ou 7.

#include<stdio.h>

int main(){
    
    // declaracao de variaveis (a soma sera inteira pois sao numeros naturais)
    int soma = 0;

    // loop de 1 ate 499
    for (int i = 1; i < 500; i++)
    {   
        // verifica se é divisivel por 4 ou divisivel por 7
        if(i % 4 == 0 || i % 7 == 0){
            soma += i;
        }
    }
    
    // saida de dados
    printf("A soma de todos os multiplos de 4 ou 7 abaixo de 500 eh: %d\n", soma);

    return 0;
}