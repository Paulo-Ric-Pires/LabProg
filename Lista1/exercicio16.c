#include <stdio.h>

int main(){
    int modulo;

    printf("Digite um numero inteiro: ");
    scanf("%d",&modulo);

    modulo *= (modulo < 0)? -1:1;

    printf("\nO valor absoluto do seu numero eh: %d",modulo);

    return 0;
}    