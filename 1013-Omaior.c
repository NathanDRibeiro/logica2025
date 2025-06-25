#include <stdio.h>
#include <stdlib.h> // Para a função abs()

int main() {
    int a, b, c;
    int maiorAB;
    int maiorABC;

    scanf("%d %d %d", &a, &b, &c);

    maiorAB = (a + b + abs(a - b)) / 2;
    maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maiorABC);

    return 0;
}
