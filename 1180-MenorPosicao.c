// Nathan Dias Ribeiro - IA
#include <stdio.h>
 
int main() {
    
    int N;
    scanf("%d", &N);
    int X[N];
    int pos;
    
    // Definindo um limite para o tamanho da lista
    if(1 < N < 1000){
        for(int i = 0; i < N; i++){
            scanf("%d",&X[i]);
        }
        
        // Dando valor a variavel menor
        int menor = X[0];
        
        /* Percorrendo nossa lista
        para achar o menor e definir ele
        */
        for(int i = 0; i < N ; i++){
            if(X[i] < menor){
                menor = X[i];
                pos = i;
            }
        }
        
        // Printando o resultado
        printf("Menor valor: %d\n", menor);
        printf("Posicao: %d\n", pos);
        
    }
    
    else {
        return 1;
    }

    return 0;
}
