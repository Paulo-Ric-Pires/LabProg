#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100
#define MIN 50

int main(){
    int num[100]={0};
    int temp;
    srand(time(NULL));

    for(int i=0;i<100;i++){
        num[i]= rand()% (MAX-MIN+1) + MIN;
        printf("%d ",num[i]);
    }
    printf("\n\n");
    //Ordenação por seleção
    /*
    printf("\n");
    for(int i=0;i<100-1;i++){
        for(int j=i+1;j<100;j++){
            if(num[i]>num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
        printf("%d  ",num[i]);
    }
    */
   //Ordenação Bolha
    int flag=1;
    for(int i=0; i<100;i++){
        flag=1;
        for(int j=0;j<100-1;j++){
            if(num[j]>num[j+1]){
                temp = num[j+1];
                num[j+1] = num[j];
                num[j] = temp;
                flag = 0;
            }
        }
        if(flag)  break;    
    }

    for(int i=0;i<100;i++){
        printf("%d  ",num[i]);
    }

    return 0;
}