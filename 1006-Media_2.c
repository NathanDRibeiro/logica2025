#include <stdio.h>

int main() {
    double A, B, C;
    double MEDIA;

    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    MEDIA = ((A * 2.0) + (B * 3.0) + (C * 5.0)) / 10.0;

    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}
