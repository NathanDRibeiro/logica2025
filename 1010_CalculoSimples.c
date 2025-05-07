#include <stdio.h>
#include <math.h>
 
int main() {
    int cod1,numP1;
    int cod2,numP2;
    double valorUn1;
    double valorUn2;
    double total;
    
    scanf("%d %d %lf", &cod1,&numP1,&valorUn1);
    scanf("%d %d %lf", &cod2,&numP2,&valorUn2);
    
    total = (numP1*valorUn1) + (numP2*valorUn2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}
