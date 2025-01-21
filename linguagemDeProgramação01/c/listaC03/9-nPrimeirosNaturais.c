#include<stdio.h>

int main(){
    int n = 0, natural = 1;

    printf("insira um numero inteiro: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", natural);
        natural += 2;
    }

    return 0;
}