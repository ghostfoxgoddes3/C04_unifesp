#include <stdio.h>

int main(){
    float V[5];
    int code;

    for(int i = 0; i<5; ++i){
        scanf("%f", &V[i]);
    }

    scanf("%d", &code);

    if(code == 1){
        for(int i = 0; i<5; ++i){
            printf("\n %f", V[i]);
        }
    }
    else if(code == 2){
        for(int i = 4; i>=0; --i){
            printf("\n %f", V[i]);
        }

    }
    else{
        printf("Invalid code.");
    }
}
