#include <stdio.h>

int main(){
    int X[5], Y[5];
    int dot_p = 0;

    for(int i = 0; i<5; ++i){
        scanf("%d", &X[i]);
    }
    for(int i = 0; i<5; ++i){
        scanf("%d", &Y[i]);
    }

    for(int i = 0; i<5; ++i){
        dot.p += X[i]*Y[i];
    }

    printf("\n");
    for(int i = 0; i<5; ++i){
        printf("%d \t", X[i]);
    }
    printf("\n");
    for(int i = 0; i<5; ++i){
        printf("\n %d", Y[i]);
    }
    printf("\n %d", dot_p);

}
