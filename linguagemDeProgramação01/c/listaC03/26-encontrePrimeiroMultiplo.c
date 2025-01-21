#include<stdio.h>

int main(){

    int num = 0;
    
    printf("insira um inteiro: ");
    scanf("%d", &num);

    for (int i = num; ; i++)//nao precisa colocar limite(ficainfinito, por isso precisamos do break)
    {
        if(i%11==0||i%13==0||i%17==0){
            printf("%d",i);
            break;//o break para a execução visto que nao ha condição.
        }
    }
    
    return 0;
