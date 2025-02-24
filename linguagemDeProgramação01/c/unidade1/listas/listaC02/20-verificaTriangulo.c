/* Dados tres valores, ˆ A, B, C, verificar se eles podem ser valores dos lados de um triangulo ˆe, se forem, se e um tri  ́ angulo escaleno, equil ˆ atero ou is  ́ oscele, considerando os seguin-  ́tes conceitos:
• O comprimento de cada lado de um triangulo ˆ e menor do que a soma dos outros  ́
dois lados.
• Chama-se equilatero o tri  ́ angulo que tem tr ˆ es lados iguais. ˆ
• Denominam-se isosceles o tri  ́ angulo que tem o comprimento de dois lados iguais. ˆ
• Recebe o nome de escaleno o triangulo que tem os tr ˆ es lados diferentes. ˆ */

#include<stdio.h>

int main(){

    float ladoA, ladoB, ladoC;

    printf("insira o valor de 3 lados do triangulo separado por virgula: ");
    scanf("%f, %f, %f", &ladoA, &ladoB, &ladoC);

    if(ladoA>= ladoB+ladoC || ladoB>= ladoA+ladoC || ladoC>= ladoA+ladoB){
        printf("os valores indicados nao formam um triangulo");
        return 0;
    }
    if((ladoA == ladoB) && (ladoA == ladoC) && (ladoB == ladoC)){
        printf("o triangulo formado e equilatero");
    }else if((ladoA == ladoB) || (ladoA == ladoC) || (ladoB == ladoC))
    // nao precisava do lado b == lado c (aula de renata po)
    {
        printf("o triangulo formado e isoceles");
    }else if(ladoA != ladoB != ladoC)
    // nao precisava da condicao aqui doidao, se fo rcolocar tem que ser individual
    {
        printf("o triangulo e escaleno");
    }
    return 0;
}