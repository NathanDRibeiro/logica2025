#include <stdio.h>

int main() {
    int codigo, quantidade;
    double total;

    scanf("%d %d", &codigo, &quantidade);

    switch (codigo) {
        case 1:
            total = 4.00 * quantidade;
            break;
        case 2:
            total = 4.50 * quantidade;
            break;
        case 3:
            total = 5.00 * quantidade;
            break;
        case 4:
            total = 2.00 * quantidade;
            break;
        case 5:
            total = 1.50 * quantidade;
            break;
        default:
            total = 0.0; 
            break;
    }

    printf("Total: R$ %.2f\n", total);

    return 0;
}
