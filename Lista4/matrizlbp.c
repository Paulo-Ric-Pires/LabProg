#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHAS 5
#define COLUNAS 6

int main(){
    unsigned char m[LINHAS][COLUNAS]={0};
    unsigned char lbp[LINHAS][COLUNAS]={0};
    srand(time(NULL));
    unsigned char baseDois=1;

    for(int i=0;i<LINHAS;i++){
        for(int j=0;j<COLUNAS;j++){
            m[i][j]= rand() % 256;
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }


    for(int i=0;i<LINHAS;i++){
        for(int j=0;j<COLUNAS;j++){
            for(int k=j-1 ; k<=j+1 ; k++){
                if((i-1>=0) && (k>=0 && k<=COLUNAS) && (m[i-1][k] >= m[i][j])) lbp[i][j] += baseDois;
                baseDois *= 2;
            }

            if((j+1<=COLUNAS) && (m[i][j+1] >= m[i][j])) lbp[i][j] += baseDois;

            baseDois *= 2;
            for(int k=j+1 ; k>=j-1 ; k--){
                if((i+1<LINHAS) && (k>=0 && k<=COLUNAS) && (m[i+1][k] >= m[i][j])) lbp[i][j] += baseDois;
                baseDois *= 2;
            }

            if((j-1>=0) && (m[i][j-1] >= m[i][j])) lbp[i][j] += baseDois;
            baseDois = 1; 
        }    
    }
    
    printf("\nMatriz LBP:\n");
    for(int i=0;i<LINHAS;i++){
        for(int j=0;j<COLUNAS;j++){
            printf("%d\t",lbp[i][j]);
        }
        printf("\n");
    }

    return 0;
}