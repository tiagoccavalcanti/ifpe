#include<stdio.h>

int main(){

    int opcao = 0;
    float num1 = 0, num2 = 0;

    while (1==1)
    {
        printf(" Selecione uma das opcoes abaixo:\n");
        printf("-----------------------------------\n ");
        printf("soma---------------------------01\n ");
        printf("subtracao----------------------02\n ");
        printf("multiplicacao------------------03\n ");
        printf("divisao------------------------04\n ");
        printf("sair---------------------------05\n\n ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            
            printf("insira os dois numeros: ");
            scanf("%f %f", &num1, &num2);
            printf("%.2f + %.2f = %.2f\n\n",num1, num2, num1+num2);

            break;
        case 2:
            
            printf("insira os dois numeros: ");
            scanf("%f %f", &num1, &num2);
            printf("%.2f - %.2f = %.2f\n\n",num1, num2, num1-num2);

            break;
        case 3:
            
            printf("insira os dois numeros: ");
            scanf("%f %f", &num1, &num2);
            printf("%.2f * %.2f = %.2f\n\n",num1, num2, num1*num2);

            break;
        case 4:
            
            printf("insira os dois numeros: ");
            scanf("%f %f", &num1, &num2);
            printf("%.2f / %.2f = %.2f\n\n",num1, num2, num1/num2);

            break;
        case 5:
            
            printf("obrigado por usar o programa!");
            return 0;
            break;

        default:
            printf("opcao invalida!");
            break;
        }
    }
    
}