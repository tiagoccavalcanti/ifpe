#include<stdio.h>

int verificaBisexto(int ano){
    return (ano%400 == 0 || (ano%4==0 && ano%100!=0));
}

int main(){
    int dia = 0, mes = 0, ano = 0;

    printf("insira uma data no formato dd/mm/aaaa para verificar se eh valida: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    switch (mes)
    {
    case 1:
        if(dia < 1 || dia > 31){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    case 2:
        if(verificaBisexto(ano)){
            if(dia<1 || dia>29){
                printf("dia invalido!");
                return 1;
            }
        }else if(dia<1 || dia>28){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    case 3:
        if(dia < 1 || dia > 31){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    case 4:
        if(dia < 1 || dia > 30){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    case 5:
        if(dia < 1 || dia > 31){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    case 6:
        if(dia < 1 || dia > 30){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    case 7:
        if(dia < 1 || dia > 31){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    case 8:
        if(dia < 1 || dia > 31){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    case 9:
        if(dia < 1 || dia > 30){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    case 10:
        if(dia < 1 || dia > 31){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    case 11:
        if(dia < 1 || dia > 30){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    case 12:
        if(dia < 1 || dia > 31){
            printf("dia invalido!");
            return 1;
        }
        printf("data valida");
        break;
    default:
        printf("mes invalido!");
        break;
    }

    return 0;
}