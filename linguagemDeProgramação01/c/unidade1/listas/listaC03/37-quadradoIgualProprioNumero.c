#include<stdio.h>

int main(){
    int maiorOrdem  = 0, menorOrdem = 0;
    for (int i = 1000; i <= 9999; i++)
    {
        maiorOrdem = i/100;
        menorOrdem = i%100;

        if(((maiorOrdem+menorOrdem)*(maiorOrdem+menorOrdem)) == i){
            printf("%d\n", i);
        }

    }
    
    return 0;
}