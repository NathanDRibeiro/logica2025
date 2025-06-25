// Nathan Dias Ribeiro - IA
#include <stdio.h>
#include <string.h>

typedef struct {
    int solved;
    int errors;
    int time;
} Problem;

int main()
{
    int N;
    while(scanf("%d", &N), N){
        Problem p[26] = {0};
        while(N--){
            char id, res[10];
            int t,i;
            scanf(" %c %d %s", &id, &t,res);
            i = id - 'A';
            if(!p[i].solved)
                if(!strcmp(res, "correct"))
                    p[i].solved = 1, p[i].time = t + 20*p[i].errors;
                else
                    p[i].errors++;
        }
        int s = 0, total = 0;
        for(int i = 0; i < 26; i++){
            if (p[i].solved){
                s++,total += p[i].time;    
            } 
        }    
        printf("%d %d\n", s, total);
            
    }
    return 0;
}
