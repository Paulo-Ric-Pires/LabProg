#include <stdio.h>

int main(){
    double pi=0,numerador=4;
    double denominador=1;

    puts(" Termo |  Pi  ");
    for(int i=1;;i++,denominador+=2){
        if(i%2){
            pi = pi + (numerador/denominador);
            printf("  %d  |  %lf  \n",i,pi);
        }else{
            pi = pi - (numerador/denominador);
            printf("  %d  |  %lf  \n",i,pi);
        }
    }
    return 0;
}