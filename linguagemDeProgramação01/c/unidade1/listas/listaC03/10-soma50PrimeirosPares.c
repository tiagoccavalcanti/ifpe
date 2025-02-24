#include<stdio.h>

int main(){
    int soma = 0, contador = 2;
    for (int i = 0; i < 50; i++)
    {

        soma += contador;
        contador +=2;
    }
    printf("soma: %d", soma);
    return 0;
}