#include <stdio.h>

int main(){
    int num,par_impar;

    printf("Digite um numero inteiro: \n");
    scanf("%d",&num);

    num % 2?puts("O numero que voce digitou eh impar."):puts("O numero que voce digitou eh par.");

    return 0;
}    