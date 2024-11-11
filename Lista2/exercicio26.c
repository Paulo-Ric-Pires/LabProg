#include <stdio.h>

int main(){
    char binario[9]={0};

    puts("Numero |  Binario  |  Octal  |  Hexadecimal");
    for(int i=1; i<257;i++){
        binario[8] = binario[8] + 1;
        if(binario[8]>1){
            binario[8] = 0;
            for(int  j=7 ; j>=0 ; j--){
                if(binario[j]==1){
                    binario[j] = 0;
                }else{
                    binario[j] = 1;
                    break;
                }
            }
        }else{
            binario[8] = 1;
        }
        printf("%d      | ",i);
        for(char i=0;i<9;i++){
            printf("%d",binario[i]);
        }
        printf(" |    %o    |    %#X  ",i,i);
        printf("\n");
    }
    

    return 0;
}