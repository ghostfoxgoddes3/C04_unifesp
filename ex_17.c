#include <stdio.h>

int main(){
    int V[10];

    for(int i = 0; i<10; ++i){
        scanf("%d", &V[i]);
        if(V[i] < 0){
            V[i] = 0;
        }
    }
    for(int i = 0; i<10; ++i){
        printf("\n %d", V[i]);
    }
}
