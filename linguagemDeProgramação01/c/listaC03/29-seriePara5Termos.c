#include<stdio.h>

int main(){

    float s = 0;

    for (int i = 1; i <= 5; i++)
    {
        float fatorial = 1;

        for (int j = 1; j <= 2*i; j++)
        {
            fatorial *= j; 
        }

        s += i/fatorial;
    }
    
    printf("%.6f",s);
    return 0;
}