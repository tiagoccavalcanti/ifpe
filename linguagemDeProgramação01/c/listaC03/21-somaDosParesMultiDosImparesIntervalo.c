#include<stdio.h>

int main(){

    int num1 = 0, num2 = 0, somaPares = 0, multiplicaImpares = 1;
    
    do
    {
    printf("insira o primeiro numero do intervalo: ");
    scanf("%d", &num1);
    printf("insira o ultimo numero do intervalo: ");
    scanf("%d", &num2);
    }while (num1>=num2);

    for (int i = num1; i <= num2; i++)
    {
        if( i % 2 == 0){
            somaPares += i;
        }else{
            multiplicaImpares *= i;
        }
    }
    
    printf("soma dos pares: %d\nmultiplicacao dos impares: %d", somaPares, multiplicaImpares);

    return 0;
}