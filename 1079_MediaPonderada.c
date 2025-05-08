#include <stdio.h>
 
int main() {
    
    int N; // Numero de casos informado pelo usuario
    scanf("%d", &N);
    
    for(int i = 0; i < N ; i++){
        float v1,v2,v3;
        
        scanf("%f", &v1);
        scanf("%f", &v2);
        scanf("%f", &v3);
        
        float media = (v1 * 2 + v2 * 3 + v3 * 5)/10.0;
        printf("%.1f\n", media );
        
    }
    
    return 0;
}
