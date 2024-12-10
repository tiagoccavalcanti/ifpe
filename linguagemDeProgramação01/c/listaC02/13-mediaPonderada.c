// Fac ̧a um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e  ́a segunda prova tem peso 1 e a terceira tem peso 2. Ao final, mostrar a m ˆ edia do aluno  ́e indicar se o aluno foi aprovado ou reprovado. A nota para aprovac ̧ao deve ser igual ou  ̃superior a 60 pontos.

#include <stdio.h>

int main (){

    float nota1, nota2, nota3;
    printf("insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("insira a terceira nota: ");
    scanf("%f", &nota3);

    float media = (nota1*1 + nota2*1 + nota3*2)/4;

    if(media<= 60){
        printf("aluno reprovado!\nMedia: %f", media);
    }else{
        printf("aluno aprovado!\nMedia: %f", media);
    }
    return 0;
}