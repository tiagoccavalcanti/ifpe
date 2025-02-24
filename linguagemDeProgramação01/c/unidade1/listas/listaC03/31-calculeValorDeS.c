#include<stdio.h>

int main(){
    float s = 1;

    for (int i = 2; i <= 50; i ++)
    {   
        s += (i * 2.0 - 1.0 )/i;        
    }
    
    printf("%.5f", s);

    return 0;
}