#include<stdio.h>

int main(){

    float num1;
    float num2;
    float num3;

    printf("insira 3 numeros para serem somados");
    // lembrar que nao tem virgula quando vai receber mais de um elemento no mesmo scanf
    // para esse tipo de entrada devemos escrever no console os elementos que serao entrado separados por espaço e pressionar enter
    scanf("%f ,%f ,%f",&num1,&num2,&num3);
    // na verdade a estrutura da entrada no prompt devera ser identica à estrutura especificada no scanf (fica esperto irmao)  

    float soma = num1 + num2 + num3;

    printf("a soma dos elementos %f, %f, %f sera: %f",num1, num2, num3, soma);

    return 0;
}