// A nota final de um estudante e calculada a partir de tr  ́ es notas atribu ˆ  ́ıdas entre o intervalo de 0 ate 10, respectivamente, a um trabalho de laborat  ́ orio, a uma avaliac ̧  ́ ao semestral  ̃e a um exame final. A media das tr  ́ es notas mencionadas anteriormente obedece aos ˆpesos: Trabalho de Laboratorio: 2; Avaliac ̧  ́ ao Semestral: 3; Exame Final: 5. De acordo  ̃com o resultado, mostre na tela se o aluno esta reprovado (m  ́ edia entre 0 e 2,9), de  ́recuperac ̧ao (entre 3 e 4,9) ou se foi aprovado. Fac ̧a todas as verificac ̧  ̃ oes necess  ̃ arias.

#include<stdio.h>

int main(){

    float notaTrabLab, notaAvaliacaoSemestral, notaExameFinal, media;

    printf("insira a nota do trabalho de laboratorio: ");
    scanf("%f", &notaTrabLab);
    if(notaTrabLab<0 || notaTrabLab>10){
        printf("nota Invalida");
        return 1;
    }
    printf("insira a nota da avaliacao semanal: ");
    scanf("%f", &notaAvaliacaoSemestral);
    if(notaAvaliacaoSemestral<0 || notaAvaliacaoSemestral>10){
        printf("nota Invalida");
        return 1;
    }
    printf("insira a nota do exame final: ");
    scanf("%f", &notaExameFinal);
    if(notaExameFinal<0 || notaExameFinal>10){
        printf("nota Invalida");
        return 1;
    }

    media = (notaTrabLab*2 + notaAvaliacaoSemestral*3 + notaExameFinal*5)/10;

    if(media>=0 && media<3){
        printf("aluno reprovado\nMedia: %f", media);
    }else if(media>=3 && media <5){
        printf("aluno em recupercao\nMedia: %f", media);
    }else if(media>= 5){
        printf("aluno aprovado\nMedia: %f", media);
    }
    
    return 0;
}