// Leia o salario de um funcion  ́ ario. Calcule e imprima o valor do novo sal  ́ ario, sabendo que  ́ele recebeu um aumento de 25%.

#include<stdio.h>
#include<math.h>

int main(){

    float salario, novoSalario;

    printf("insira o valor do salario: ");
    scanf("%f", &salario);

    novoSalario = salario + (salario*0.25);

    printf("o valor do novo salario sera: %.2f", novoSalario);

    return 0;
}