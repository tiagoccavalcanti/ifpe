// Ler um numero inteiro. Se o n  ́ umero lido for negativo, escreva a mensagem “N  ́ umero  ́invalido”. Se o n  ́ umero for positivo, calcular o logaritmo deste numero.  ́

#include<stdio.h>
#include<math.h>

int main(){

    float num;
    
    printf("insera um numero positivo: ");
    scanf("%f", &num);

    if(num <= 0 ){
        printf("numero invalido");
    }else{
        printf("log(%.2f) sera: %.2f", num, log(num));
    }

    return 0;
}