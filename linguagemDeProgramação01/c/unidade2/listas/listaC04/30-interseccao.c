#include<stdio.h>

int main(){
    int vetor1[10], vetor2[10], interseccao[10], contador = 0;
    int tamanho = (sizeof(vetor1)/sizeof(vetor1[0]));

    for(int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento do vetor1: ", i+1);
        scanf("%d", &vetor1[i]);
    }
    
    printf("\n");

    for(int i = 0; i < tamanho; i++)
    {
        printf("insira o %d elemento do vetor2: ", i+1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {  
        for (int j = 0; j < tamanho; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                int repetido = 0;
            
            
            for (int k = 0; k < contador; k++)
            {
                if (interseccao[k] == vetor1[i])
                {
                    repetido = 1;
                    break;
                }
                
            }

            if(!repetido){
                interseccao[contador] = vetor1[i];
                contador++;
            }
            break;
        }
            
        }
        
    }
    
    for (int i = 0; i < contador; i++)
    {
        printf("%d ", interseccao
        [i]);
    }
    


    return 0;
}