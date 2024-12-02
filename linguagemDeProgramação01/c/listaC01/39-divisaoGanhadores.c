/* A importancia de R$ 780.000,00 ser ˆ a dividida entre tr  ́ es ganhadores de um concurso. ˆ
Sendo que da quantia total:
• O primeiro ganhador recebera 46%;  ́
• O segundo recebera 32%;  ́
• O terceiro recebera o restante;  ́
Calcule e imprima a quantia ganha por cada um dos ganhadores. */

#include<stdio.h>
#include<math.h>

int main(){

    float valorPremio = 780000.00, ganhador1, ganhador2, ganhador3;

    ganhador1 = valorPremio * 0.46;
    ganhador2 = valorPremio * 0.32;
    ganhador3 = valorPremio - (ganhador1 + ganhador2);

    printf("\nValor do premio: %.2f\nPrimeiro ganhador: %.2f;\nSegundo ganhador: %.2f;\nTerceiro ganhador: %.2f\n\n", valorPremio, ganhador1, ganhador2, ganhador3);

    return 0;
}