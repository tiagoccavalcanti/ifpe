#include<stdio.h>

int main(){
    
    float nota1, nota2, media;

    printf("insira a primeira nota: ");
    scanf("%f",&nota1);
    printf("insira a segunda nota: ");
        scanf("%f",&nota2);
    
    /* if(nota1 >= 0 && nota1 <=10){
            
        printf("insira a segunda nota: ");
        scanf("%f",&nota2);
        
        if(nota2 >= 0 && nota2 <= 10){

            media = (nota1 + nota2) / 2;
            printf("a media do aluno e %.2f, sendo a primeira nota %.2f, e a segunda %.2f", media, nota1, nota2);

        }else{

            printf("segunda nota invalida ela deve ser um valor entre 0.0 e 10.0!");

        }

    }else{
        printf("primeira nota invalida ela deve ser um valor entre 0.0 e 10.0!");
    } */
   if(nota1<0 || nota1>10){
    printf("nota 1 invalida");
   }else if(nota2<0 || nota2>10){
    printf("nota 2 invalida");
   }else{
    media = (nota1 + nota2) / 2;
            printf("a media do aluno e %.2f, sendo a primeira nota %.2f, e a segunda %.2f", media, nota1, nota2);
   }
}