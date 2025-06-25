#include <stdio.h>

int main() {
    int N;
    int horas;
    int minutos;
    int segundos;

    scanf("%d", &N);

    horas = N / 3600;
    N = N % 3600; // Segundos restantes após remover as horas
    
    minutos = N / 60;
    segundos = N % 60; // Segundos restantes após remover os minutos

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
