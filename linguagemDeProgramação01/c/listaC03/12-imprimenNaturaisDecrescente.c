#include<stdio.h>

int main(){
    int n = 0, m = 0;

    printf("insira um inteiro: ");
    scanf("%d", &n);
    m = n;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", m);
        m--;
    }
    
    return 0;
}