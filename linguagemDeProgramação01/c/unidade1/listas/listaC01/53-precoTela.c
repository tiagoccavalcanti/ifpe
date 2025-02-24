// Fac ̧a um programa para ler as dimensoes de um terreno (comprimento  ̃ c e largura l), bem como o prec ̧o do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.

#include<stdio.h>

int main(){

    float c, l, p;
    printf("insira o comprimento do terreno: ");
    scanf("%f", &c);
    printf("insira a largura do terreno: ");
    scanf("%f", &l);
    printf("insira o preço da tela: ");
    scanf("%f", &p);

    float custo = (2 * c + 2 * l) * p;

    printf("considerando que o terreno e um retangulo de perimetro %.2f, o custo de tela para a cerca sera %.2f", (2*c + 2*l), custo);

    return 0;
}