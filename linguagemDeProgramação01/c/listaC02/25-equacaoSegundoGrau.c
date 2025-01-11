#include<stdio.h>
#include<math.h>

int main(){

    float a, b, c, delta, x1, x2;

    printf("insira os valores para a, b e c: ");
    scanf("%f, %f, %f", &a, &b, &c);

    if(a == 0){
        printf("nao eh equacao de segundo grau");
        return 1;
    }
    
    printf("%.2fx^2 + (%.2fx) + (%.2f)", a, b, c);

    delta = pow(b,2) - 4*a*c;

    if(delta < 0){
        printf("nao existe uma raiz real");

    }else if(delta == 0){
        x1 = (-b + sqrt(delta))/(2*a);
        printf("raiz unica raiz = %.2f", x1);

    }else if(delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("raiz 1 = %.2f\nraiz 2 = %.2f", x1, x2);
    }

    return 0;
}