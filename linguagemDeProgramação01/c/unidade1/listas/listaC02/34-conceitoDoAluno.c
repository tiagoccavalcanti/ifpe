#include<stdio.h>

int main(){

    int faltas = 0;
    float nota = 0;
    printf("insira o numero de faltas do aluno: ");
    scanf("%d", &faltas);
    printf("insira a nota do aluno: ");
    scanf("%f", &nota);

    if(nota >= 9 && nota <= 10){
        if(faltas < 20)
        {printf("conceito A!");}
        else 
        {printf("conceito B!");}
    }else if(nota >= 7.5 && nota <= 8.9){
        if(faltas < 20)
        {printf("conceito B!");}
        else 
        {printf("conceito C!");}
    }else if(nota >= 5.0 && nota <= 7.4){
        if(faltas < 20)
        {printf("conceito C!");}
        else 
        {printf("conceito D!");}
    }else if(nota >= 4.0 && nota <= 4.9){
        if(faltas < 20)
        {printf("conceito D!");}
        else 
        {printf("conceito E!");}
    }else if(nota >= 0.0 && nota <= 3.9){
        if(faltas < 20)
        {printf("conceito E!");}
        else 
        {printf("conceito E!");}
    }
    return 0;
}