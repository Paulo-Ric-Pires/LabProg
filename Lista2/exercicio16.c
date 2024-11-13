#include <stdio.h>

int main(){
    int somatorioTres=0,somatorioCinco=0;

    for(int i=0;i<=200;i++){
        if(i<100 && !(i%3)){
            printf("O numero %d e divisivel por 3\n",i);
            somatorioTres += i;
        }else if(i>200 && !(i%5)){
            printf("O numero %d e divisivel por 5\n",i);
            somatorioCinco += i;
        }else{
            continue;
        }
    }

    return 0;
}