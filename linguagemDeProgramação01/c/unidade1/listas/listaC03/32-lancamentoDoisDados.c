#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand(time(NULL));
    int dado1 = 0, dado2 = 0, n = 0;

    printf("insira o numero de rolagens: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        dado1 = rand()%6;
        dado2 = rand()%6;

        printf("rolagem %d: ",i+1);

        if (dado1>dado2)
        {
            printf("d1 = %d > d2 = %d\n",dado1, dado2);
        }else if(dado1<dado2){
            printf("d1 = %d < d2 = %d\n",dado1, dado2);
        }else{
            printf("d1 = %d = d2 = %d\n",dado1, dado2);
        }
        
    }
    

    return 0;
}