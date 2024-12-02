// Sejam a e b os catetos de um triangulo, onde a hipotenusa ˆ e obtida pela equac ̧  ́ ao:  ̃hipotenusa = √ a 2 + b 2. Fac ̧a um programa que receba os valores de a e b e calcule o valor da hipotenusa atraves da equac ̧  ́ ao.Imprima o resultado dessa operac ̧  ̃ ao.  ̃

#include<stdio.h>
#include<math.h>

int main(){

    float catetoA, catetoB, hipotenusa;

    printf("insira o valor do cateto A para calcular a hipotenusa: ");
    scanf("%f", &catetoA);
    printf("insira o valor do cateto B para calcular a hipotenusa: ");
    scanf("%f", &catetoB);

    hipotenusa = sqrt(catetoA*catetoA + catetoB*catetoB);


    printf("o valor da hipotenusa sera: %.2f", hipotenusa);
    return 0;
}