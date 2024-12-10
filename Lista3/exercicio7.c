#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num[3];
    float aritmetica;
    double geometrica;
    srand(time(NULL));

    for(int i=0;i<3;i++){
        num[i] = rand() % 20;
        printf("%d ",num[i]);
    }
    float soma=0;
    double multiplica=1;
    for(int i=0;i<3;i++){
        soma += num[i];
        multiplica *= num[i];
    }
    aritmetica = soma / 3;
    geometrica = pow(multiplica,(double)(1/3));

    printf("A media aritmetica eh: %.2f .\n",aritmetica);
    printf("A media geometrica eh: %.lf .\n",geometrica);
  

    return 0;
}