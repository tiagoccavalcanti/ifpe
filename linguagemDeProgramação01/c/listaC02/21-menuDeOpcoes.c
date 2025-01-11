/* Escreva o menu de opc ̧oes abaixo. Leia a opc ̧  ̃ ao do usu  ̃ ario e execute a operac ̧  ́ ao esco-  ̃lhida. Escreva uma mensagem de erro se a opc ̧ao for inv  ̃ alida.  ́Escolha a op ̧c~ao:
1- Soma de 2 n ́umeros.
2- Diferen ̧ca entre 2 n ́umeros (maior pelo menor).
3- Produto entre 2 n ́umeros.
4- Divis~ao entre 2 n ́umeros (o denominador n~ao pode ser zero).
Op ̧c~ao */

#include<stdio.h>

int main(){

    int opcao;
    float num1, num2;

    printf("escolha a opcao:\n"
    "1- soma de 2 numeros.\n"
    "2- diferenca entre 2 numeros.\n"
    "3- produto entre 2 numeros.\n"
    "4- divisao entre 2 numeros(denominador nao pode ser zero).\n"
    "opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("insira dois numeros: ");
        scanf("%f, %f", &num1, &num2);

        printf("%.2f", num1+num2);
        break;
    case 2:
        printf("insira dois numeros: ");
        scanf("%f, %f", &num1, &num2);

        printf("%.2f", num1-num2);
    case 3:
        printf("insira dois numeros: ");
        scanf("%f, %f", &num1, &num2);

        printf("%.2f", num1*num2);
    case 4:
        printf("insira dois numeros: ");
        scanf("%f, %f", &num1, &num2);

        printf("%.2f", num1/num2);
    default:
        printf("operacao invalida");
        break;
    }
    return 0;
}