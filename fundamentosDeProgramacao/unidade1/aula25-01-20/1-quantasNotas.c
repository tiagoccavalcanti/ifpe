//notas: 100, 50, 20, 10, 5, 2 e 1

#include<stdio.h>

int main(){
        
    int num = 0, NumerosDeNotas = 0;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    printf("insira a quantidade de dinheiro: ");
    scanf("%d", &num);

    for (int i = 0; i < 7; i++)
    {
        NumerosDeNotas = num/notas[i];
        printf("%d nota (s) de %d\n", NumerosDeNotas, notas[i]);
        num = num%notas[i];
    }
    
    /* 
    //notas de 100
    NumerosDeNotas = num/100;
    printf("%d nota (s) de 100\n", NumerosDeNotas);

    //notas de 50
    NumerosDeNotas = (num%100)/50;
    printf("%d nota (s) de 50\n", NumerosDeNotas);

    //notas de 20
    NumerosDeNotas = ((num%100)%50)/20;
    printf("%d nota (s) de 20\n", NumerosDeNotas);

    //notas de 10
    NumerosDeNotas = ((num%100)%50)%20/10;
    printf("%d nota (s) de 10\n", NumerosDeNotas);

    //notas de 5
    NumerosDeNotas = ((((num%100)%50)%20)%10)/5;
    printf("%d nota (s) de 5\n", NumerosDeNotas);

    //notas de 2
    NumerosDeNotas = (((((num%100)%50)%20)%10)%5)/2;
    printf("%d nota (s) de 2\n", NumerosDeNotas);

    //notas de 1
    NumerosDeNotas = ((((((num%100)%50)%20)%10)%5)%2)/1;
    printf("%d moeda (s) de 1\n", NumerosDeNotas);
 */
    return 0;
}



