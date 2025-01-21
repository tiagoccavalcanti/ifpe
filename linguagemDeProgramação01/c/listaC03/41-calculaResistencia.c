#include<stdio.h>

int main(){

    float r1 = 0, r2 = 0, r = 0;
    
    do
    {   
        printf("insira o valor das resisterncias r1 e r2 respectivamente:\n");
        scanf("%f %f",&r1, &r2);

        r = (r1*r2)/(r1+r2);
        printf("Resistencia resultante: %f\n", r);

    } while (r1 != 0 && r2 != 0);
    
    return 0;
}