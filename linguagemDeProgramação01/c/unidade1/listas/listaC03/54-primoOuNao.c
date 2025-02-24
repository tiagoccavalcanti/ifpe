#include<stdio.h>

int main(){
    int num = 0, contador = 0;
    do
    {
        printf("insira um inteiro maior que 1: ");
        scanf("%d", &num);

    } while (num <= 1);

    for (int i = 1; i <= num; i++)
    {
        if(num%i == 0){
            contador ++;
            if(contador>2){
                printf("NAO E PRIMO!");
                return 1;
            }
        }
    }
    if(contador == 2){
        printf("Eh primo!!");
    }
    

    return 0;
}