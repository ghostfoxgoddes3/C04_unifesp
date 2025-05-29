#include <stdio.h>

int main(){
    float X[5], Y[5];
    float dot_p = 0;

    for(int i = 0; i<5; ++i){
        scanf("%f", &X[i]);
    }
    for(int i = 0; i<5; ++i){
        scanf("%f", &Y[i]);
    }

    for(int i = 0; i<5; ++i){
        dot_p += X[i]*Y[i];
    }

    printf("\n");
    for(int i = 0; i<5; ++i){
        printf("%f \t", X[i]);
    }
    printf("\n");
    for(int i = 0; i<5; ++i){
        printf("\n %f", Y[i]);
    }
    printf("\n %f", dot_p);

}
