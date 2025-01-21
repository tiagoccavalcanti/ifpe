#include<stdio.h>
#include<math.h>

int main(){

    int SomaQuadrados = 0, quadradoDaSoma = 0, diferenca = 0;

    for (int i = 1; i <= 100; i++)
    {
        SomaQuadrados += pow(i,2);
    }

    for (int i = 1; i <= 100; i++)
    {
        quadradoDaSoma += i;
    }

    diferenca = quadradoDaSoma*quadradoDaSoma - SomaQuadrados ;

    printf("%d", diferenca);
    
    
    return 0;
}