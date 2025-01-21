/* #include<stdio.h>

int main(){

    int a = 1, b = 1, c = 1;

    for (int i = 0; ; i++)
    {
        a++;
        b = 0;
        c = 0;
        for (int j = 1; j <= 1000; j++)
        {
            b++;
            c = 0;
            for (int k = 1; k <= 1000; k++)
            {
                c++;
                if((a*a + b*b == c*c) && (a+b+c == 1000)){
                printf("%d\n%d\n%d\n",a,b,c);
                break;
                }
            }
                
        }
        
    }
    
    return 0;
} */

#include<stdio.h>

int main() {
    int a, b, c;

    // Percorre valores de 'a' e 'b' e calcula 'c' diretamente
    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) { // b > a para evitar repetições
            c = 1000 - a - b; // Calcula c diretamente

            // Verifica se a, b, c formam uma tripla pitagórica
            if (a * a + b * b == c * c) {
                printf("a = %d, b = %d, c = %d\n", a, b, c);
                return 0; // Sai do programa após encontrar a solução
            }
        }
    }

    return 0;
}
