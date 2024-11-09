#include <stdio.h>

int main(){
    int fibonacci[20];

    for(int i=0;i<20;i++){
        if(i!=0 && i!=1){
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }else{
            fibonacci[i] = 1;
        }
        printf("%d\n",fibonacci[i]);    
    }

    return 0;
}