// Fac ̧a um programa para verificar se um determinado numero inteiro e divis  ́  ́ıvel por 3 ou 5, mas nao simultaneamente pelos dois.

#include<stdio.h>

int main(){

    int num;

    printf("insira um numero inteiro: ");
    scanf("%d", &num);
    
    if(num%3 == 0 && num%5 == 0){
        printf("numero invalido!");
        return 1;
    }else if(num % 3 == 0){
        printf("o numero é divisivel por 3");
    }else if(num % 5 == 0){
        printf("o numero e divisivel por 5");
    }
}