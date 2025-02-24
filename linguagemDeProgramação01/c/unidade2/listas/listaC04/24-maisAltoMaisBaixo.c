#include <stdio.h>

int main() {
    int numAluno[10];
    float altura[10];
    int alunoMaisAlto, alunoMaisBaixo;
    float maiorAltura = 0, menorAltura = 100; // Valores iniciais altos para facilitar a comparação

    // Entrada dos dados
    for (int i = 0; i < 10; i++) {
        printf("Insira o número do aluno %d: ", i + 1);
        scanf("%d", &numAluno[i]);
        printf("Insira a altura do aluno %d (em metros): ", i + 1);
        scanf("%f", &altura[i]);

        // Verifica o aluno mais alto
        if (altura[i] > maiorAltura) {
            maiorAltura = altura[i];
            alunoMaisAlto = numAluno[i];
        }

        // Verifica o aluno mais baixo
        if (altura[i] < menorAltura) {
            menorAltura = altura[i];
            alunoMaisBaixo = numAluno[i];
        }
    }

    // Exibição dos resultados
    printf("\nAluno mais alto: Número %d, Altura: %.2f metros\n", alunoMaisAlto, maiorAltura);
    printf("Aluno mais baixo: Número %d, Altura: %.2f metros\n", alunoMaisBaixo, menorAltura);

    return 0;
}
// pedi ajuda pro chat isso que eh foda