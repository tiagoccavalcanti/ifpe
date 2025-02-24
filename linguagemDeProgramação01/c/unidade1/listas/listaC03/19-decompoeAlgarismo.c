#include<stdio.h>

int main(){
    int num = 0;

    while (num < 100 || num > 999)
    {
        printf("insita um inteiro de 3 algarismos positivo: ");
        scanf("%d", &num);
    }
    
    printf("%d\n", num/100);
    printf("%d\n", (num%100)/10);
    printf("%d\n", (num%100)%10);
    return 0;
}