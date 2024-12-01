#include <stdio.h>

int main() {
    char letra, caseComplementar;

    printf("Insira uma letra: ");
    scanf("%c", &letra);

    if (letra >= 'a' && letra <= 'z') { 
        caseComplementar = letra - 32;
    } else if (letra >= 'A' && letra <= 'Z') {
        caseComplementar = letra + 32;
    } else {
        printf("Caractere inválido. Insira apenas letras.\n");
        return 1;
    }

    printf("A letra complementar é: %c\n", caseComplementar);

    return 0;
}
         