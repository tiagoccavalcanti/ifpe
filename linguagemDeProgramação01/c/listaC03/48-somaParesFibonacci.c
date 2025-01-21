#include<stdio.h>

int main(){

    int soma = 0, sequencial = 1, anterior1 = 0, anterior2 = 0;

    while (sequencial <= 4000000)
    {
        printf("%d\n", sequencial);

        anterior2 = anterior1;
        anterior1 = sequencial;
        sequencial = anterior1 + anterior2;

        if(sequencial % 2 == 0){
            soma += sequencial;
        }
    }
    printf("soma = %d", soma);
    

    return 0;
}