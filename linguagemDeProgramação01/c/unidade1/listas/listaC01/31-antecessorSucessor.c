// Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.  ́

#include<stdio.h>

int main(){

int num, antecessor, sucessor;
printf("insira um inteiro e traremos o antecessor e o sucessor: ");
scanf("%d", &num);

antecessor = num - 1;
sucessor = num + 1;

printf("antecessor: %d;\nnumero escolhido: %d;\nsucessor: %d\n", antecessor, num, sucessor);

    return 0;
}