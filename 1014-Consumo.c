#include <stdio.h>

int main() {
    int X;
    double Y;
    double consumoMedio;

    scanf("%d", &X);
    scanf("%lf", &Y);

    consumoMedio = X / Y;

    printf("%.3lf km/l\n", consumoMedio);

    return 0;
}
