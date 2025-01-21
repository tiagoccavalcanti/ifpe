#include<stdio.h>

int main(){
    int a = 0, num = 0, media = 0;

    while (a<10){
        printf("insira um inteiro: ");
        scanf("%d", &num);
        if(num>0){
            media += num;
            a++;
        }
    }
    printf("%d", media/10);
    
    
    return 0;
}