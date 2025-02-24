// Tres amigos jogaram na loteria. Caso eles ganhem, o pr ˆ emio deve ser repartido pro- ˆporcionalmente ao valor que cada deu para a realizac ̧ao da aposta. Fac ̧a um programa  ̃que leia quanto cada apostador investiu, ovalor do premio, e imprima quanto cada um ˆganharia do premio com base no valor investido. ˆ

#include<stdio.h>

int main(){

    float amigo1, amigo2, amigo3, premio;
    printf("insira o valor do primeiro amigo: ");
    scanf("%f", &amigo1);
    printf("insira o valor do segundo amigo: ");
    scanf("%f", &amigo2);
    printf("insira o valor do terceiro amigo: ");
    scanf("%f", &amigo3);
    printf("insira o valor do premio: ");
    scanf("%f", &premio);

    float total = amigo1 + amigo2 + amigo3;
    float percentual1 = amigo1/total;
    float percentual2 = amigo2/total;
    float percentual3 = amigo3/total;

    printf("o primeiro amigo vai ganhar %.2f, o segundo ganha %.2f e o terceiro %.2f", (percentual1*premio), (percentual2*premio), (percentual3*premio));
    return 0;
}