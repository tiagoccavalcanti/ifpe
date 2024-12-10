/* Escreva um programa em C que:
- Declare variáveis de diferentes tipos (int, short, long) e inicialize-as com valores distintos
- Mostre os valores e os endereços de memória usada por cada variável
- Compare o tamanho de cada tipo usando sizeof
- Analise como os valores são armazenados em memória */

#include<stdio.h>

int main(){

    int a = 100;
    short int b = 10;
    long int c = 2147483647;

    printf("\nValor: %d\n", a);
    printf("endereco: %p\n", &a);
    printf("tamanho: %u\n\n",sizeof(a));
    
    printf("valor: %hd\n", b);
    printf("endereco: %p\n", &b);
    printf("tamanho: %u\n\n",sizeof(b));
    
    printf("valor: %ld\n", c);
    printf("endereco: %p\n", &c);
    printf("tamanho: %u\n\n",sizeof(c));
    return 0;
}