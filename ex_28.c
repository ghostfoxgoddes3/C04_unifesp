#include <stdio.h>

int main(){
    int v[10], v1[10], v2[10];
    int even = 0, odd = 0;

    for(int i = 0; i<10; ++i){
        scanf("%d", &v[i]);
        if(v[i]%2 == 1){
            v1[odd] = v[i];
            ++odd;
        }
        else{
            v2[even] = v[i];
            ++even;
        }
    }

    printf("\n Odd vector:")
    for(int i = 0; i<odd; ++i){
        printf("\t %d", v1[i]);
    }
    printf("\n Even vector:");
    for(int i = 0; i<even; ++i){
        printf("\t %d", v2[i]);
    }
}

