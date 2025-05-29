#include <stdio.h>

int main(){
    int v[6], odd[6], even[6];
    int odd_sum = 0, even_sum = 0, o = 0, e = 0;

    for(int i  0; i<6; ++i){
        scanf("%d", &v[i]);
        if(v[i]%2 = 0){
            even[e] = v[i];
            even_sum += even[e];
            ++e;
        }
        else{
            odd[o] = v[i];
            odd_sum += odd[o];
            ++o;
        }
    }
    printf("\n Even numbers that were typed:");
    for(int i = 0; i<e; ++i){
        printf("\t %d", even[i]);
    }
    printf("\n Evens added together = %d", even_sum);
    printf("\n Odd numbers that were typed:");
    for(int i = 0; i<o; ++i){
        printf("\t %d", odd[i]);
    }
    printf("Evens added together = %d", odd_sum);
}
