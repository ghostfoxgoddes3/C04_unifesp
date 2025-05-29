#include <stdio.h>

int main(){
    int V[10];

    for(int i = 0; i < 10; ++i){
        scanf("%d", &V[i]);
        for(int j = 2; j < V[i]; ++j){
            if(V[i]%j != 0){
                break
            }
            // buguei aqui, vai ver é o horário
        }

    }

}
