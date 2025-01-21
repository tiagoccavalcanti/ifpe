#include<stdio.h>
#include<math.h>

int main(){
    int num = 0;

    do
    {
        printf("numero:\n");
        scanf("%d", &num);

        printf("quadrado: %.2f;\ncubo: %.2f.\nraiz quadrada: %.4f\n\n", pow(num, 2), pow(num, 3), sqrt(num));    
    } while (num>0);
    
    return 0;
}