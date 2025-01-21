#include<stdio.h>

int main(){
    int n = 0, j = 0, i = 0, contador = 0;

    do
    {
        printf("insira o numero de divisores: ");
        scanf("%d", &n);
        printf("insira o primeiro inteiro: ");
        scanf("%d", &i);
        printf("insira o segundo inteiro: ");
        scanf("%d", &j);

    } while (n <= 0 || i <= 0 || j <= 0);
    
    for (int k = 0; ; k++)
    {
        if(k % i == 0 || k % j == 0){
            printf("%d\n", k);
            contador ++;
            if (contador == n)
            {
                break;
            }
            
        }
    }
    
    return 0;
}