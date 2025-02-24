#include<stdio.h>

int main(){

    float altura = 0, peso = 0;
    printf("insira sua altura: ");
    scanf("%f", &altura);
    printf("insira o seu peso: ");
    scanf("%f", &peso);

    if(altura < 1.20){
        if(peso <= 60){
            printf("classificacao de acordo com altura e peso: A");
        }else if(peso > 60 && peso <= 90){
            printf("classificacao de acordo com altura e peso: D");
        }else if(peso> 90){
            printf("classificacao de acordo com altura e peso: G");
        }
    }else if(altura >= 1.20 && altura <= 1.70){
        if(peso <= 60){
            printf("classificacao de acordo com altura e peso: B");
        }else if(peso > 60 && peso <= 90){
            printf("classificacao de acordo com altura e peso: E");
        }else if(peso> 90){
            printf("classificacao de acordo com altura e peso: H");
        }
    }else if(altura > 1.70){
        if(peso <= 60){
            printf("classificacao de acordo com altura e peso: C");
        }else if(peso > 60 && peso <= 90){
            printf("classificacao de acordo com altura e peso: F");
        }else if(peso> 90){
            printf("classificacao de acordo com altura e peso: I");
        }
    }
    return 0;
}