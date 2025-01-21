#include<stdio.h>

int main(){

    int inicio = 0, final = 0, somaImpares = 0;

    printf("digite o valor inicial e valor final: ");
    scanf("%d %d", &inicio, &final);

    if(inicio > final){
        return 1;
    }

    for (int i = inicio; i <= final; i++)
    {
        if(i % 2 != 0){
            somaImpares += i;
            printf("%d\n",i);
        }
    }
    
    printf("%d", somaImpares);

    return 0;
}