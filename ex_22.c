#include <stdio.h>

int main(){
    int V1[10], V2[10], V3[10];

    for(int i = 0; i<10; ++i){
        scanf("%d", &V1[i]);
    }
    for(int i = 0; i<10; ++i){
        scanf("%d", &V2[i]);
    }
    for(int i = 0; i<10; ++i){
        if(i%2 = 0){
            V3[i] = V1[i];
        }
        else{
            V3[i] = V2[i];
        }
    }
}
