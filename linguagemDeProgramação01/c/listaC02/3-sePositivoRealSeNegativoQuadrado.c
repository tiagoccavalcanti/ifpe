#include<stdio.h>
#include<math.h>

int main(){

    float num;
    printf("insira um numero e se ele for positivo retornaremos a raiz, se negativo o quadrado: ");
    scanf("%f", &num);

    if(num > 0){
        printf("a raiz de %.2f e %.2f", num, sqrt(num));
        // a funcao sqrt funciona assim como a funçao pow no vscode e as funçoes sao lidas como declaração implicita.
    }else{
        printf("o quadrado de %.2f e %.2f", num, pow(num,2));
    }
    return 0;
}