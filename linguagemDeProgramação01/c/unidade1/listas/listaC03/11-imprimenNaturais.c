#include<stdio.h>

int main(){
    int n;

    printf("insira um numero inteiro: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", i);
    }
    
    return 0;
}