#include <stdio.h>

int main() {
    int diasTotal;
    int anos;
    int meses;
    int dias;

    scanf("%d", &diasTotal);

    anos = diasTotal / 365;
    diasTotal = diasTotal % 365;

    meses = diasTotal / 30;
    dias = diasTotal % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}
