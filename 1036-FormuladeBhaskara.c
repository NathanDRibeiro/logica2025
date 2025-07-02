#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A,B,C;
    double delta;
    double X1, X2;
    double raizQ;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    delta = (B*B) - 4 * A * C;
    
    if(delta < 0){
        printf("Impossivel calcular\n");
    } else {
        if (A != 0){
        raizQ = sqrt(delta);
        
        X1 = (-B - raizQ)/(2*A);
        X2 = (-B + raizQ)/(2*A);
        
        printf("R1 = %.5lf\n",X2);
        printf("R2 = %.5lf\n",X1);
            
        } else{
            printf("Impossivel calcular\n");
        }
        
    }
    
    
    
    return 0;
}
