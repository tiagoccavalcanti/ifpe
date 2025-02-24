#include<stdio.h>

int main(){

    int num;

    printf("digite um numero e direi se ele é positivo ou negativo: ");
    scanf("%d", &num);

    if(num%2 == 0){
        printf("o numero e par");
    }else{
        printf("o numero e impar");
    }
    return 0;
}