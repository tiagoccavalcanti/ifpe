#include<stdio.h>

int main(){
    int n = 0, m = 0;
    while (n<=0 || n % 2 != 0)
    {
        printf("insira um inteiro positivo par: ");
        scanf("%d", &n);
    }
    m = n;
    for (int i = 0; i <= n; i++)
    {
        if(m % 2 == 0){
            printf("%d", m);
        }
        m--;
    }
        


    return 0;
}