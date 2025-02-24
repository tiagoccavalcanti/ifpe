#include<stdio.h>

int main(){
    int  num = 0;
    float funcao = 0;
    do
    {
        
        printf("\ninsira um inteiro: ");
        scanf("%d", &num);

        if(num<=0){printf("o numero deve ser inteiro e positivo");}

    } while (num<=0);

    for (int i = 1; i <= num; i++)
    {
        funcao += 1.0/i;
    }

    printf("H(n) = %f", funcao);
    

    return 0;
}