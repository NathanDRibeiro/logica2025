#include <stdio.h>

int main() {
    char operacao;
    scanf("%c", &operacao);

    double M[12][12];

    // Loop para ler todos os 144 elementos da matriz
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    double soma = 0.0;
    int contador = 0;

    // Loop para percorrer a matriz e processar os elementos acima da diagonal secundária
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            // Condição para elementos ACIMA da diagonal secundária
            if (i + j < 11) {
                soma += M[i][j];
                contador++;
            }
        }
    }

    // Verifica a operação e imprime o resultado
    if (operacao == 'S') {
        printf("%.1f\n", soma);
    } else if (operacao == 'M') {
        if (contador > 0) { // Garante que não haverá divisão por zero
            printf("%.1f\n", soma / contador);
        }
    }

    return 0;
}
