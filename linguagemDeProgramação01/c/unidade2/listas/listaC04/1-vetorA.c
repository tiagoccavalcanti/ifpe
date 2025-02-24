#include<stdio.h>

int main(){

    int A[] = {1,0,5,-2,-5,7};
    int soma = A[0] + A[1]+ A[5];

    printf("soma = %d\n", soma);
    A[3] = 100;

    for(int i = 0; i < sizeof(A)/sizeof(A[0]) ; i++)
    {
        printf("%d\n", A[i]);
    }

    return 0;
}