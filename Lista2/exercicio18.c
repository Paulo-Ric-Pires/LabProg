#include <stdio.h>

int main(){
    int somatorio=0;

    for(int i=1;i<=60;i++){
        if(i==1){
            somatorio = 1;
        }else{
            somatorio += 2 * (i-1);
        }
    }
    printf("O somatorio eh igual a: %d",somatorio);

    return 0;
}