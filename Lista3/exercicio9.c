#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define MIN 50

int main(){
    int num[3][3];

     srand(time(NULL));

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            num[i][j]= rand()% (MAX-MIN+1) + MIN;
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
     for(int i=0;i<3;i++){
        puts("Elementos da diagonal:");
        printf("%d ",num[i][i]);
    }

    return 0;
}