#include <stdio.h>

int main() {
    char nome[50];
    double salarioFixo;
    double totalVendas;
    double totalReceber;

    scanf("%s", nome);
    scanf("%lf", &salarioFixo);
    scanf("%lf", &totalVendas);

    totalReceber = salarioFixo + (totalVendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", totalReceber);

    return 0;
}
