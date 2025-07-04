#include <stdio.h>

int main() {
    float M[12][12];
    int linha;
    char oper;

    // Primeiro lê a linha e a operação
    scanf("%d", &linha);
    scanf(" %c", &oper);  // espaço antes do %c consome qualquer whitespace

    // Agora lê a matriz
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%f", &M[i][j]);
        }
    }

    float soma = 0.0;

    for (int i = 0; i < 12; i++) {
        soma += M[linha][i];
    }

    if (oper == 'S') {
        printf("%.1f\n", soma);
    } else if (oper == 'M') {
        printf("%.1f\n", soma / 12);
    }

    return 0;
}
