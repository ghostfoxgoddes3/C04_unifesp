#include <stdio.h>

int main(){
    int V[10], isprime[10];

    for(int i = 0; i < 10; ++i){
        scanf("%d", &V[i]);
        if(V[i] < 2){
            isprime[i] = 0;
        }
        else{
            for(int j = 1; j*j < V[i]; ++j){
                if(V[i]%j != 0){
                    isprime[i] = 0;
                    break;
                }
                isprime[i] = 1;
            }
        }
    }
    
    printf("Are prime:");
    for(int i = 0; i<10; i++){
        if(isprime[i] == 1){
            printf("\n element %d - position %d", V[i], i);
        }
    }
}
