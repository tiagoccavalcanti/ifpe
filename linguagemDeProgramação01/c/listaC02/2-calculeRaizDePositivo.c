#include <stdio.h>
#include <math.h>

int main()
{

    float num;

    printf("insira um numero e se ele for positivo oretornaremos a raiz quadrada: ");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("%.2f", sqrt(num));

    }else{
        printf("numero invalido");
        
    }
    return 0;
}