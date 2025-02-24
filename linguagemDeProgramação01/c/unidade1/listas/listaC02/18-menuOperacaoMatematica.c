// Fac ̧a um programa que mostre ao usuario um menu com 4 opc ̧  ́ oes de operac ̧  ̃ oes ma-  ̃tematicas (as b  ́ asicas, por exemplo). O usu  ́ ario escolhe uma das opc ̧  ́ oes e o seu pro-  ̃grama entao pede dois valores num  ̃ ericos e realiza a operac ̧  ́ ao, mostrando o resultado e  ̃saindo.

#include<stdio.h>

int main(){

    char operacao;
    float num1, num2;

    printf("escolha uma das opcoes:\npressione + para soma\npressione - para subtracao\npressione * para multiplicacao\npressione / para divisao\n");
    scanf("%c", &operacao);

    switch (operacao)
    {
    case '+':

        printf("insira o primeiro numero para ser somado: ");
        scanf("%f", &num1);
        printf("insira o segundo numero para ser somado: ");
        scanf("%f", &num2);

        float soma = num1+num2;

        printf("%.2f", soma);
        break;
    case '-':
    

        printf("insira o primeiro numero para ser subtraido: ");
        scanf("%f", & num1);
        printf("insira o segundo numero para ser subtraido: ");
        scanf("%f", & num2);

        float subtracao = num1-num2;

        printf("%.2f", subtracao);
        break;
    case '*':
    

        printf("insira o primeiro numero para ser multiplicado: ");
        scanf("%f", & num1);
        printf("insira o segundo numero para ser multiplicado: ");
        scanf("%f", & num2);

        float multiplicacao = num1*num2;

        printf("%.2f", multiplicacao);
        break;
    case '/':
    

        printf("insira o primeiro numero para ser dividido: ");
        scanf("%f", & num1);
        printf("insira o segundo numero para ser dividido: ");
        scanf("%f", & num2);

        float divisao = num1/num2;

        printf("%.2f", divisao);
        break;
    default:
        printf("entrada invalida!");
        break;
    }
    return 0;
}