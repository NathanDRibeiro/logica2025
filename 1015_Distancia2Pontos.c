#include <stdio.h>
#include <math.h>
 
int main() {
 
    float x1, y1;
    float x2, y2;
    float xE, yE;
    float somaFinal;

    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);

    xE = (x2 - x1) * (x2 - x1);
    yE = (y2 - y1) * (y2 - y1);

    somaFinal = xE + yE;

    double raiz = sqrt(somaFinal);
    printf("%.4f\n", raiz );
    return 0;
}
