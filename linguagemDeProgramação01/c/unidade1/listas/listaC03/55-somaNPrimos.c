#include<stdio.h>

int main(){

    int num = 0, contador = 0, soma = 0;

     do
    {
        printf("insira um inteiro maior que 1: ");
        scanf("%d", &num);

    } while (num <= 0);
    for (int j = 1; j < num; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            if(j%i == 0){
                contador ++;
                if(contador>2){
                    break;
                }
            }
        }
        if(contador == 2){
            soma += j;
        }
        contador = 0;
    }
    
      printf("%d", soma);
    return 0;
}