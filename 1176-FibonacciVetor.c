#include <stdio.h>
 
 
int main() {
 
    long long int N[61]; // N[0], N[1]... N[9] = 10 Elementos
    N[0] = 0;
    N[1] = 1;
    int casos, fb;
    
    for(int i = 2; i <= 60; i++){
        N[i] = N[i-1] + N[i-2];
    }
    scanf("%d", &casos);
    for(int i = 0; i < casos; i++){
        scanf("%d",&fb );
        printf("Fib(%d) = %lld\n", fb, N[fb]);
    }
    
    
 
    return 0;
}
