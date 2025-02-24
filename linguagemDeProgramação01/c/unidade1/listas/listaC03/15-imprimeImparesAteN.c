#include<stdio.h>

int main(){
    int n = 0;
    while (n <=0 || n % 2 == 0)
    {
        printf("insira um inteiro positivo impar: ");
        scanf("%d", &n);
    }
    for (int i = 0; i <= n; i++)
    {
        if(i % 2 != 0){
            printf("%d ", i);
        }
    }
        


    return 0;
}