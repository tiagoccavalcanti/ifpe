/* 2)  Escreva um programa que, dada a idade de um atleta, classifique-o em uma das seguintes categorias:

Categoria -----Idade
Infantil A ------5 a 7 
Infantil B ------8 a 10
Juvenil A ------11 a 13
Juvenil B------14 a 17
Adultos  ------- maiores de 18 anos 
OBS: Utilize cláusula "if" aninhados. */


#include<stdio.h>

int main(){

    // declaracao de variaveis
    int idade;

    // entrada de dados
    printf("insira a idade do atleta: ");
    scanf("%d", &idade);

    // classificacao do atleta:

    // para atletas entre 5 e 7
    if(idade >= 5 && idade <= 7){
        printf("Infantil A");
    }
    // para idades entre 8 e 10 anos
    else if(idade > 7 && idade <= 10){
        printf("Infantil B");
    }
    // para idades entre 11 e 13 anos
    else if(idade > 10 && idade <= 13){
        printf("Juvenil A");
    }
    // para idades entre 14 e 17 anos
    else if(idade > 13 && idade <= 17){
        printf("Juvenil B");
    }
    // para idades acima de 18 anos ou mais
    else if(idade > 17){
        printf("Adultos");
    }
    // para idades menores que 5 anos
    else{
        printf("Nao se aplica");
    }

    return 0;
}