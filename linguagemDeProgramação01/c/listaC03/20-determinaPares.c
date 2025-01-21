#include<stdio.h>

int main(){
    int num = 0, contadorNumeros = 0, contadorPares = 0;

    while (num != 1000)
    {
        printf("insira um numero: \n");
        scanf("%d", &num);
        contadorNumeros ++;

        if(num%2 == 0){
            printf("PAR\n");
            contadorPares ++;

        }else{
            printf("IMPAR\n");
        }
    }
     
     printf("foram litodos %d numeos, dos quais %d sao pares", contadorNumeros, contadorPares);
    
    return 0;
}