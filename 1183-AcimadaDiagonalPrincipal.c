#include <stdio.h>

int main() {
    char operacao;
    scanf("%c", &operacao);

    double M[12][12];

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    double soma = 0.0;
    int contador = 0;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            if (i < j) {
                soma += M[i][j];
                contador++;
            }
        }
    }

    if (operacao == 'S') {
        printf("%.1f\n", soma);
    } else if (operacao == 'M') {
        if (contador > 0) {
            printf("%.1f\n", soma / contador);
        }
    }

    return 0;
}
