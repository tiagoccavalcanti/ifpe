#include<stdio.h>
#include<math.h>

float geometrica(int x, int y, int z){
    float result = pow(x*y*z,1.0/3.0);
    return result;
}

float ponderada(int x, int y, int z){
    float result = (x+ 2*y+ 3*z)/6.0;
    return result;
}

float harmonica(int x, int y, int z){
    if (x == 0 || y == 0 || z == 0) {
        printf("Erro: Não é possível calcular a média harmônica com valores iguais a zero.\n");
        return -1;
    }
    float result = 1.0/((1.0/x) + (1.0/y) + (1.0/z));
    return result;
}

float aritimetica(int x, int y, int z){
    float result = (x+y+z)/3.0;
    return result;
}

int main(){
    char opcao;
    int x=0, y=0, z=0;
    printf("escolha uma das opcoes:\na)geometrica\nb)ponderada\nc)harmonica\nd)aritimetica\n");
    scanf(" %c", &opcao);
    printf("insira o primeiro inteiro para ser operado: ");
    scanf("%d", &x);
    printf("insira o segundo inteiro para ser operado: ");
    scanf("%d", &y);
    printf("insira o terceiro inteiro para ser operado: ");
    scanf("%d", &z);
    switch (opcao)
    {
    case 'a':
        printf("a media geometrica dos numeros %d, %d, %d\nsera: %.2f", x, y, z, geometrica(x, y, z));
        break;
    case 'b':
        printf("a media ponderada dos numeros %d, %d, %d\nsera: %.2f", x, y, z, ponderada(x, y, z));
        break;
    case 'c':
        printf("a media harmonica dos numeros %d, %d, %d\nsera: %.2f", x, y, z, harmonica(x, y, z));
        break;
    case 'd':
    printf("a media aritimetica dos numeros %d, %d, %d\nsera: %.2f", x, y, z, aritimetica(x, y, z));
        break;
    default:
        printf("opcao invalida");
        break;
    }
}