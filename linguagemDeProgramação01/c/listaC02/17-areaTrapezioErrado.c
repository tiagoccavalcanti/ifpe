#include<stdio.h>

int main(){

    float base1, base2, altura, baseMaior, baseMenor;
    
    printf("insira a primeira base: ");
    scanf("%f", &base1);
    printf("insira a segunda base: ");
    scanf("%f", &base2);
    printf("insira a altura: ");
    scanf("%f", &altura);

    if(base1>base2){
        baseMaior = base1;
        baseMenor = base2;
    }else{
        baseMaior = base2;
        baseMenor = base1;
    }

    float area = ((baseMaior + baseMenor)*altura)/2;
    printf("a area do trapezio sera: %.2f", area);
    return 0;
}