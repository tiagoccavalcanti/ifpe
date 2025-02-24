// 1)  Escreva um programa que leia as coordenadas x e y de dois pontos distintos (P1 e P2) no R² e calcule a distância (euclidiana no plano, ou também conhecida como bidimensional) entre eles. (https://pt.wikipedia.org/wiki/Dist%C3%A2ncia_euclidiana)

#include<stdio.h>
#include<math.h>

int main(){
    // declaracao de variaveis
    float p1x, p1y, p2x, p2y, distancia = 0;

    // entrada de dados
    printf("insira as coordenadas (x, y) para o primeiro ponto P1: ");
    scanf("%f %f", &p1x, &p1y);

    printf("insira as coordenadas (x, y) para o segundo ponto P2: ");
    scanf("%f %f", &p2x, &p2y);

    // distancia entre dois pontos no plano bidimensional
    distancia = sqrt(pow((p1x-p2x),2)+pow((p1y-p2y),2));

    // saida de dados
    printf("A distancia entre os pontos P1(%.2f, %.2f) e P2(%.2f, %.2f) sera: %.2f", p1x, p1y, p2x, p2y, distancia);
    return 0;
}