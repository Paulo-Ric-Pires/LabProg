#include <stdio.h>

int main(){
    int num;
    int contadorSete=0;

    puts("Digite um numero: ");
    scanf("%d",&num);

    int temp = num;
    while(temp > 0 ){
        if(temp % 10 == 7){
            contadorSete++;
        }
        temp /= 10;
    }
    if(contadorSete){
        printf("Existem %d algarismos sete dentro de %d",contadorSete,num);
    }else{
        printf("Nao existem algarismos igual a sete dentro de %d",num);
    }

    return 0;
}
