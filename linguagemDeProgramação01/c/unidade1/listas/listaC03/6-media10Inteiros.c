#include<stdio.h>

int main(){

    int num = 0, media = 0;
    for (int i = 0; i < 10; i++){
        printf("insira um numero: ");
        scanf("%d", &num);
        media += num;
    }
    
    printf("a media é: %d", media/10);
    return 0;
}