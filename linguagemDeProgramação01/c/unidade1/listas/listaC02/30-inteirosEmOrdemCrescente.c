#include<stdio.h>

int main(){
    int a=0, b=0, c=0;
    printf("insira o primeiro numero: ");
    scanf("%d", &a);
    printf("insira o segundo numero: ");
    scanf("%d", &b);
    printf("insira o terceiro numero: ");
    scanf("%d", &c);

    int primeiro, segundo, terceiro;

    if(a >= b && a >= c){
        terceiro = a;
        if(b >= c){
            segundo = b;
            primeiro = c;
        }else{
            segundo = c;
            primeiro = b;
        }
    }else if(b >= a && b >= c){
        primeiro = b;
        if(a >= c){
            segundo = a;
            primeiro = c;
        }else{
            segundo = c;
            primeiro = a;
        }
    }else{
        primeiro = c;
        if(a >= b){
            segundo = a;
            primeiro = b;
        }else{
            segundo = b;
            primeiro = a;
        }
    }
    printf("%d, %d, %d", primeiro, segundo, terceiro);
    return 0; 
}
