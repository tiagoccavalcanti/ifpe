#include<stdio.h>

int main(){
    int num = 0, sequencial = 1, anterior1 = 0, anterior2 = 0;
    
    scanf("%d", &num);

    printf("%d, %d, ", anterior1, sequencial);

    while (num >= sequencial){ 

        anterior2 = anterior1;
        anterior1 = sequencial;
        sequencial = anterior1 + anterior2;
        
        printf("%d, ", sequencial);

    }
    

    return 0;
}

/* proximo
atual
anterior

anterior = 0
atual = anterior
proximo = 1

anterior = 1
atual = 1 + 0 = 1
proximo = 2

anterior = 1
atual = 1 + 1 = 2
proximo = 3

anterior = 2
atual = 1 + 2 = 3
proximo  = 5

anterior = 3
atual = 3 + 2 = 5
proximo  = 8

anterior = 5
atual = 5 + 3 = 8
proximo = 13

anterior = 8
atual = 8 + 5 = 13
proximo = 8 + 13 = 21

anterior = 13
atual = 8 + 13 = 21

atual 8 + 13 = 21
anterior */