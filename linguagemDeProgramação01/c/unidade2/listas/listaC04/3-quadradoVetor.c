#include<stdio.h>

int main(){
    int recebe[10], quadrado[10];

    for (unsigned int i = 0; i < (sizeof(recebe)/sizeof(recebe[0])); i++)
    {
        printf("insira o %dº elemento: ", i+1);
        scanf("%d", &recebe[i]);

        quadrado[i] = recebe[i]*recebe[i];

    }
    
    for (unsigned int i = 0; i < (sizeof(recebe)/sizeof(recebe[0])); i++)
    {
        printf("%d ", recebe[i]);
        
    }
    printf("\n");

    for (unsigned int i = 0; i < (sizeof(recebe)/sizeof(recebe[0])); i++)
    {
        printf("%d ", quadrado[i]);
        
    }

    return 0;
}