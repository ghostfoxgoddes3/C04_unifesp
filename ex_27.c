#include <stdio.h>

int main(){
    int V[10];
    int isprime[10];

    for(int i = 0; i < 10; ++i){
        scanf("%d", &V[i]);
        if(V[i] < 2){
            isprime[i] = 0;
        }
        for(int j = 2; j < sqrt(V[i]); ++j){
            if(V[i]%j != 0){
                isprime[i] = 0;
                break
            }
            isprime[i] = 1;
        }
    }
    for(int i = 0; i<10; i++){
        if(isprime[i] == 1){
            printf("element %d position %d", V[i], i);
        }
    }
}
