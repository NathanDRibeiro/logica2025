#include <stdio.h>
 
int main() {

    int N,i;
    int notas[] = {100,50,20,10,5,2,1}; //array de 0 - 6 (<7)
    // notas[0] = 100 notas[1] = 50 e...
    int valor_original;
    
    scanf("%d", &N);
    
    if(N <= 0 || N >= 1000000){
        return 1;// encerra o programa por estar fora do intervalo
    }
    
    valor_original = N; // guardando o valor original de N, antes do loop
    printf("%d\n", valor_original);
    
    for (i = 0; i < 7; i++){
        int qtd = N / notas[i]; // verificando quanto cabe de notas
        printf("%d nota(s) de R$ %d,00\n", qtd, notas[i]);
        N = N % notas[i]; //guardando o resto da divisão das notas

    }
    
 
    return 0;
}
