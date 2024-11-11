#include <stdio.h>

int main(){
    int fatorial;

    for(int i=1;i<=10;i++){
        if(i%2){
            for(int j=i;j>0;j--){
                fatorial *= j;
            }
            printf("%d eh impar e seu fatorial eh: ",i,fatorial);
        }
    }

    return 0;
}