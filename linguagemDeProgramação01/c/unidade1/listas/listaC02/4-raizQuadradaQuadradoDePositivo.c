#include<stdio.h>
#include<math.h>

int main(){

    float num;

    printf("\ninsira um numero e se for positivo ele sera operado: \n");
    scanf("%f", &num);

    if(num > 0){
        printf("\no quadrado de %.2f sera %.2f\na raiz de %.2f sera %.2f\n\n", num, pow(num,2), num, sqrt(num));
    }else{
        printf("o numero nao e positivo\n\n");
    }
    return 0;
}