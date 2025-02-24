#include<stdio.h>

int main(){

    int opcao = 0, velocidade = 0;

    while(1==1){
        printf(" Selecione uma das opcoes abaixo:\n");
        printf("-----------------------------------\n ");
        printf("km/h-->m/s---------------------01\n ");
        printf("m/s-->km/h---------------------02\n ");
        printf("sair---------------------------03\n\n ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("insira a velocidade em quilometros por hora: ");
            scanf("%d",&velocidade);

            printf("%d km/h --> %.2fm/s\n\n", velocidade, velocidade/3.6);
            break;
        case 2:
            printf("insira a velocidade em metros por segundo: ");
            scanf("%d",&velocidade);

            printf("%dm/s --> %.2fkm/h\n\n", velocidade, velocidade*3.6);
            break;
        case 3:
            printf("obrigado por usar o meu programa!");
            return 0;
            break;
        default:
            printf("opcao invalida!");
            break;
        }
    }
    return 0;
}