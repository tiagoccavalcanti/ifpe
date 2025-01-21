#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num = 0, contador = 0, tentativa = 0;

    srand(time(NULL));
    num = (rand() % 1000) + 1;

    while (num != tentativa)
    {
        if(tentativa == 0){
            printf("insira um inteiro entre 1 e 1000: ");
            scanf("%d", &tentativa);
        }
        else{
            printf("tente novamente: ");
            scanf("%d", &tentativa);
        }

        if(num > tentativa){printf("muito pequeno!\n\n");}
        if(num < tentativa){printf("grande demais!\n\n");}
        
        contador ++;
    }

    printf("Parabens, voce acertou em %d tentativas", contador);
    
    return 0;
}