// Receba a altura do degrau de uma escada e a altura que o usuario deseja alcanc ̧ar subindo a escada. Calcule e mostre quantos degraus o usuario dever  ́ a subir para atingir seu objetivo.

#include<stdio.h>

int main(){
    float alturaDegrau, alturaDesejada;

    printf("insira a altura dos degraus: ");
    scanf("%f", &alturaDegrau);
    printf("insira a altura que se deseja alcancar: ");
    scanf("%f", &alturaDesejada);

    int numeroDeDegraus = alturaDesejada/alturaDegrau + 1;

    printf("para alcançar a altura dejesada serao necessarios %d degraus", numeroDeDegraus);
    return 0;
}