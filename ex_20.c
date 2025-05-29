#include <stdio.h>

int main(){
    int V1[10], V2[10];
    int j = 0;

    for(int i = 0; i<10; ++i){
        scanf("%d", &V1[i]);
        if(V1[i] > 50 || V1[i] < 0){
            printf("The %d º given value does not belong to the range [0, 50]", i);
            return 0;
        }
        else if(V1[i]%2 == 1){
            V2[j] = V1[i];
            ++j;
        }
    }
    for(int i = 0; i<10; ++i){
        if(i<j){
            printf("\n %d %d", V1[i], V2[i]);
        }
        else{
            printf("\n %d", V1[i]);
        }
    }
}
