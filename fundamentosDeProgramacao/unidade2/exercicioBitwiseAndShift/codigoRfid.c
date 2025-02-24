#include<stdio.h>
#include<stdlib.h>

int main(){

    // declaraçao de variaveis
    int codigo = 0, secao = 0, disponibilidade = 0, ID = 0, menu = 0;
    do
    {
    // tela inicial
    system("cls");
    printf("\nSitema de Biblioteca\n");
    printf("1 - codificar\n");
    printf("2 - decodificar\n");
    printf("0 - sair\n");
    
    // seleção da opção
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        // entrada e validação de dados
        do
        {
            printf("\ninforme a secao: ");
            scanf("%d", &secao);
        } while (secao < 0 || secao > 15);
        
        do
        {
            printf("\ninforme a disponibilidade: ");
            scanf("%d", &disponibilidade);    
        } while (disponibilidade < 0 || disponibilidade > 1);
        
        do
        {
            printf("\ninforme o ID: ");
            scanf("%d", &ID);    
        } while (ID < 0 || ID > 32768);

        // construçao do codigo identificador
        codigo = ID|(disponibilidade<<15)|(secao<<16);

        // saida
        printf("-----------------------------");
        printf("\ncodigo gerado: %d\n\n", codigo);

        // restart ou fechamento do programa
        printf("1 - nova consulta\n");
        printf("0 - sair\n");
        scanf("%d", &menu);
        break;

    case 2:
        // entrada do codigo identificador
        printf("\ninforme o codigo: ");
        scanf("%d", &codigo);
        
        // processamento e saida do codigo desmenbrado
        printf("\n-----------------------------\n");
        printf("Secao identificada: %d\n", (codigo>>16));
        printf("Disponibilidade identificada: %d\n", (codigo>>15)&1);
        printf("ID livro identificado: %d\n\n", codigo&32767);

        // restart ou fechamento do programa
        printf("1 - nova consulta\n");
        printf("0 - sair\n");
        scanf("%d", &menu);
        break;

    case 0:
        break;

    default:
        printf("Entrada invalida");
        break;
    }
    } while (menu != 0);
    
    
    return 0;
}
// 00000000000000000000
// 00101000011010011011

/* 00000000000000000000 - composiçao

00000111111111111111 - ID
00000000000000001111 - secao << 16
00000000000000000001 - estado << 15

00000000000000000000 - composiçao
00000111111111111111 - ID
00001000000000000000 - estado
11110000000000000000 - secao */