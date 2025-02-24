#include<stdio.h>

int main(){
    printf("\naqui esta o for:\n");
    for (int i = 0; i < 100; i++){
        printf("%d ", i+1);
    }
    printf("\naqui esta o While:\n");
    int a = 0;
    while (a < 100)
    {
        printf("%d ", a + 1);
        a++;
    }
    printf("\naqui esta o do While:\n");
    int b = 0;
    do{
        printf("%d ", b + 1);
        b++;
    }while (b < 100);
    
    
    
}