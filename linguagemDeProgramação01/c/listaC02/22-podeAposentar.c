/* Leia a idade e o tempo de servic ̧o de um trabalhador e escreva se ele pode ou nao se  ̃aposentar. As condic ̧oes para aposentadoria s  ̃ ao ̃
• Ter pelo menos 65 anos,
• Ou ter trabalhado pelo menos 30 anos,
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */

#include<stdio.h>

int main(){
    
    int idade, tempoDeServico;

    printf("insira a idade e o tempo de servico para que possamos determinar a validade da aposentadoria: ");
    scanf("%d, %d", &idade, &tempoDeServico);

    if(idade >= 65 || tempoDeServico >= 30 || (idade >= 60 && tempoDeServico >= 25)){
        printf("voce pode se aposentar!");
    }else{
        printf("voce ainda nao pode se aposentar");
    }
    return 0;
}