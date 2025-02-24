#include<stdio.h>

int main(){

    float salarioCarlos = 0, salarioJoao = 0;
    int contador = 0;

    printf("insira o salario de carlos: ");
    scanf("%f", &salarioCarlos);
    salarioJoao = salarioCarlos/3;

    while(salarioCarlos > salarioJoao){

        salarioCarlos *= 1.02;
        salarioJoao *= 1.05;

        contador ++;
    }

    printf("serao necessarios %d meses para que o salario se joao supere o de carlos\n\nAo fim desse periodo carlos tera: %.2f\njoao tera: %.2f", contador, salarioCarlos, salarioJoao);
}