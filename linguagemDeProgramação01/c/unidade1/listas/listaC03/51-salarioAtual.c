#include<stdio.h>

int main(){

    int ano = 0, anoContrato = 1995;
    float aumento = 0.015;
    float salario = 2000.0;

    do
    {printf("insira o ano para saber qual o salario do funcioanrio: ");
        scanf("%d", &ano);

        if(ano < anoContrato){
            printf("o funcionario ainda nao fazia parte da empresa!!");
        }
    }while(ano < anoContrato);

    for(int i = 1996; i <= ano; i++){
        salario += salario * aumento;
        aumento *= 2;
    }

    printf("o salario para o ano %d, sera: %.2f", ano, salario);
    return 0;
}