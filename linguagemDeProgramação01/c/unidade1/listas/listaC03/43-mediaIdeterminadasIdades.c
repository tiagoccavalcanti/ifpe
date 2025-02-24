#include<stdio.h>

int main(){
    
    int idade = 0, contador = 0;
    float media = 0;
    do
    {
        printf("insira uma idade: ");
        scanf("%d", &idade);

        media += idade;

        if(idade>0){contador ++;}

    } while (idade > 0);

    printf("a media das idades informadas sera: %.2f", media/contador);

    return 0;
}