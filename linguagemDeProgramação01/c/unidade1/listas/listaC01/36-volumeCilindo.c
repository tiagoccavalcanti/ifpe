// Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um cilindro circular e calculado por meio da seguinte f  ́ ormula:  ́ V = π ∗ raio2 ∗ altura,onde π = 3.141592.

#include<stdio.h>
#include<math.h>

int main(){

    float altura, raio, volume, pi=3.141592;

    printf("insira a altura de um cilindro: ");
    scanf("%f", &altura);
    printf("insira o raio de um cilindro: ");
    scanf("%f", &raio);

    volume = pow(raio, 2) * pi *altura;

    printf("o volume do cilindro sera: %.2f",volume);

    return 0;
}