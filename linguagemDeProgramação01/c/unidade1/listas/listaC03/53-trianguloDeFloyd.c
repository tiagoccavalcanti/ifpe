#include<stdio.h>

int main(){
    int num = 0, impressao = 1;
    
    do
    {
        printf("insira um inteiro positivo: ");
        scanf("%d", &num);

    } while (num <= 0);
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < (i+1); j++)
        {
            printf("%d ", impressao);
            impressao++;
        }
        
        printf("\n");
    }
    

    return 0;
}