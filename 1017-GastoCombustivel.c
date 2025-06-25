#include <stdio.h>

int main() {
    int tempo;
    int velocidade_media;
    double distancia;
    double litros_necessarios;
    const double CONSUMO_POR_LITRO = 12.0;

    scanf("%d", &tempo);
    scanf("%d", &velocidade_media);

    distancia = tempo * velocidade_media;
    litros_necessarios = distancia / CONSUMO_POR_LITRO;

    printf("%.3lf\n", litros_necessarios);

    return 0;
}
