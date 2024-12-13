#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 20
#define MIN 10
#define DIMENSAO  5

int main(){
    int numeros[DIMENSAO][DIMENSAO];
    int num,count=0;

    srand(time(NULL));

    for(int i=0;i<DIMENSAO;i++){
        for(int j=0;j<DIMENSAO;j++){
            numeros[i][j]= rand()% (MAX-MIN+1) + MIN;
            printf("%d ",numeros[i][j]);
        }
        printf("\n");
    }

    puts("Digite um numero inteiro entre 50 e 100.");
    scanf("%d",&num);

    for(int i=0;i<DIMENSAO;i++){
        for(int j=0;j<DIMENSAO;j++){
            if(num == numeros[i][j]){
                count++;
            }
        }
    }
    if(count){
        printf("O numero %d aparece vez/s %d na matriz.",num,count);
    }else{
        printf("O numero %d nao aparece na matriz.",num);
    }    

    return 0;
}    