#include<stdio.h>

int main(){

    float vetor[5]; 
    int menu = 0, tamanho = (sizeof(vetor)/sizeof(vetor[0]));

    for (int i = 0; i < tamanho; i++)
    {
        printf("insira um numero real: ");
        scanf("%f", &vetor[i]);
    }

    printf("isira o codigo inteiro: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 0:
        return 0;
        break;

    case 1:
        printf("vetor na ordem direta: ");

        for (int i = 0; i < tamanho; i++)
        {
            printf("%.2f ", vetor[i]);
        }
        
        break;

    case 2:
        printf("vetor na ordem inversa: ");

        for (int i = 0; i < tamanho; i++)
        {
            printf("%.2f ", vetor[tamanho - i - 1]);
        }
        
        break;
    default:
        printf("codigo inválido");
        break;
    }
    
    return 0;
}