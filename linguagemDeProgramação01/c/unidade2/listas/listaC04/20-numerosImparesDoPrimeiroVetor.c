#include<stdio.h>

int main(){
    int vetor[10], tamanho = (sizeof(vetor)/sizeof(vetor[0])), impares[10], contador = 0;

        for (int i = 0; i < tamanho; i++)
        {
            do
            {
                printf("insira o %d valor: ", i+1 );
                scanf("%d", &vetor[i]);
            } while (vetor[i] <= 0 || vetor[i] >= 50);
        }
        
        for (int i = 0; i < tamanho; i++)
        {
            if(vetor[i]%2 != 0){
                impares[contador] = vetor[i];
                contador++;
            }
        }

        for (int i = 0; i < contador; i++)
        {
            printf("%d ", impares[i]);

            if (i % 2 != 0) 
            {
                printf("\n");
            }
            
        }
        
        
    
    
    

    return 0;
}