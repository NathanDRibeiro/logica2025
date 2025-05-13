// Nathan Dias Ribeiro - IA
#include <stdio.h>
 
int main() {
   int N = 1;
   float resulS = 0.0;
 
   for(int D = 1; D <= 50; D++){
       resulS += (float) N / D;
       N += 2;
   }
   
   printf("O valor de S é: %.2f", resulS);
}
