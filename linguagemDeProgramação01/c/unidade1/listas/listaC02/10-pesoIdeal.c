/* Fac ̧a um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
peso ideal, utilizando as seguintes formulas (onde  ́ h corresponde a altura): `
• Homens: (72.7 ∗ h) − 58
• Mulheres: (62, 1 ∗ h) − 44, 7 */

#include<stdio.h>

int main(){

    float altura;
    char sexo;

    printf("insira a altura em metros: ");
    scanf("%f", &altura);
    printf("insira o sexo, M para masculino e F para feminino: ");
    scanf("\n%c", &sexo);

    if(sexo =='M'){
        printf("seu peso ideal sera: %.2f", (72.7*altura)-58);
    }else if(sexo == 'F'){
        printf("seu peso ideal sera: %.2f", (62.1*altura)-44.7);
    }else{
        printf("sexo invalido");
    }


    return 0;
}