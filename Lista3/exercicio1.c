#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define MIN 50

int main(){
    float n[15];
    srand(time(NULL));

    for(int i=0;i<15;i++){
        n[i] = (((float)rand()/ RAND_MAX)*(MAX-MIN)) + MIN;
        printf("%.2f ",n[i]);
    }
    printf("\n");
    float menor=n[0],maior=0;

    for(int i=0;i<15;i++){
        if(n[i]<menor){
            menor=n[i];
        }
        if(n[i]>maior){
            maior=n[i];
        }
        
    }
    printf("\nO maior valor do vetor eh %.2f e o menor eh %.2f.",maior,menor);
    printf("\nE a soma do maior com o menor eh: %.2f.",(maior+menor));

    return 0;
}