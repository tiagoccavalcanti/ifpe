// Escreva um programa que leia as coordenadas x e y de pontos no R2 e calcule sua distancia da origem ˆ (0, 0).

#include<stdio.h>
#include<math.h>

int main(){
    float x, y;
    printf("insira as coordenadas x e y: ");
    scanf("(%f, %f)", &x, &y);

    float distancia = sqrt(pow(x,2)+pow(y,2));
    
    printf("a distancia do ponto (%.2f, %.2f) ate a origem e: %.2f", x, y, distancia);
    return 0;
}