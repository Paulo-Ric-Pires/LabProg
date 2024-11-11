#include <stdio.h>

int main(){
    float fahrenheit;

    for(float i=10;i<=100;i+=10){
        fahrenheit = (1.8*i) + 32;
        printf("%.2f graus celsius em fahrenheit eh %.2f\n",i,fahrenheit);

    }

    return 0;
}