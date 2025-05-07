#include <stdio.h>
#include <math.h>
 
int main() {
 
    double raio;
    double n;
    double area;
    n = 3.14159;
    
    scanf("%lf", &raio);
    
    raio = raio * raio;
    
    area = n * raio;
    
    printf("A=%.4lf\n", area);
    
    return 0;
}
