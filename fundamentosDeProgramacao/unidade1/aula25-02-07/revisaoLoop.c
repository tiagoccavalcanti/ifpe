#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    // declaracao de variaveis
    int aleatorio = 0, tentativa = 0, menu = 0;

    // menu
    do
    {   
        system("cls");
        printf("\n  ===JOGO DE ADIVINHACAO===\n");
        printf("escolha um nivel de dificuldade\n");
        printf("1 - Facil (1 a 10, 5 tentativas)\n");
        printf("2 - Medio (1 a 50, 7 tentativas)\n");
        printf("3 - Dificil (1 a 100, 10 tentativas)\n");
        printf("4 - Modo Infinito (1 a 100, tentativas ilimitadas)\n");
        printf("5 - sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &menu);

        // determinacao da semente
        srand(time(NULL));

        // controle do menu
        switch (menu)
        {
        case 1:
            // definicao do aleatorio
            aleatorio = (rand()%10) + 1;

            // nivel facil
            for (int i = 1; i <= 5; i++)
            {
                printf("\ninsira um numero: ");
                scanf("%d", &tentativa);

                if(i == 4){
                    printf("\nvoce consegue!\nContinue tentando.\n");
                }

                if(tentativa > aleatorio){
                    printf("\nnumero muito grande\n");
                    printf("voce tem %d tentativas\n", 5-i);
                }
                else if(tentativa < aleatorio){
                    printf("\nnumero muito pequeno\n");
                    printf("voce tem %d tentativas\n", 5-i);
                }
                else{
                    printf("\nPARABENS, VOCE ACERTOU\n");
                    printf("precisou de apenas %d tentativas\n", i);
                    break;
                }
            }

            if(tentativa != aleatorio){
                printf("\no numero correto eh: %d\n", aleatorio);
            }

            break;
        
        case 2:
            
            // definicao do aleatorio
            aleatorio = (rand()%50) + 1;

            // nivel medio
            for (int i = 1; i <= 7; i++)
            {
                printf("\ninsira um numero: ");
                scanf("%d", &tentativa);

                if(i == 6){
                    printf("\nvoce consegue!\nContinue tentando.\n");
                }

                if(tentativa > aleatorio){
                    printf("\nnumero muito grande\n");
                    printf("voce tem %d tentativas\n", 7-i);
                }
                else if(tentativa < aleatorio){
                    printf("\nnumero muito pequeno\n");
                    printf("voce tem %d tentativas\n", 7-i);
                }
                else{
                    printf("\nPARABENS, VOCE ACERTOU\n");
                    printf("precisou de apenas %d tentativas\n", i);
                    break;
                }
            }

            if(tentativa != aleatorio){
                printf("\no numero correto eh: %d\n", aleatorio);
            }

            break;
        case 3:
            
            // definicao do aleatorio
            aleatorio = (rand()%100) + 1;

            // nivel dificil
            for (int i = 1; i <= 10; i++)
            {
                printf("\ninsira um numero: ");
                scanf("%d", &tentativa);

                if(i == 8){
                    printf("\nvoce consegue!\nContinue tentando.\n");
                }

                if(tentativa > aleatorio){
                    printf("\nnumero muito grande\n");
                    printf("voce tem %d tentativas\n", 10-i);
                }
                else if(tentativa < aleatorio){
                    printf("\nnumero muito pequeno\n");
                    printf("voce tem %d tentativas\n", 10-i);
                }
                else{
                    printf("\nPARABENS, VOCE ACERTOU\n");
                    printf("precisou de apenas %d tentativas\n", i);
                    break;
                }
            }

            if(tentativa != aleatorio){
                printf("\no numero correto eh: %d\n", aleatorio);
            }

            break;
        case 4:
            
            // definicao do aleatorio
            aleatorio = (rand()%100) + 1;

            // modo infinito
            for (int i = 1;; i++)
            {
                printf("\ninsira um numero: ");
                scanf("%d", &tentativa);

                if(i % 10 == 0){
                    printf("\nvoce consegue!\nContinue tentando.\n");
                }

                if(tentativa > aleatorio){
                    printf("\nnumero muito grande\n");
                }
                else if(tentativa < aleatorio){
                    printf("\nnumero muito pequeno");
                }
                else{
                    printf("\nPARABENS, VOCE ACERTOU\n");
                    printf("precisou de apenas %d tentativas\n", i);
                    break;
                }
            }
            break;
        case 5:
            break;
        default:
            printf("numero invalido, tente outra opcao\n");
            break;
        }
    } while (menu != 5);
    
    return 0;
}