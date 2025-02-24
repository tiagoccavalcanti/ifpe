#include<stdio.h>

int main(){

    int n = 0, soma = 0;
    printf("insira o valor de n: ");
    scanf("%d", &n);

    for (int i = 1; i <= (2*n - 1); i++)
    {
        if(i % 2 != 0){
            soma += i;
        }else{
            soma -= i;
        }
    }

    printf("%d", soma);
    

    return 0;
}