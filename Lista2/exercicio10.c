#include <stdio.h>

int main(){

    for(int i = 15;i <91;i++){
        if((i % 4) == 0){
            printf("O numero %d eh multiplo de 4 e seu quadrado eh: %d\n",i,(i*i));
        }
    }

    return 0;
}