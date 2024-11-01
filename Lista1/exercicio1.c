#include <stdio.h>

int main(){
    int num;
    
    printf("Digite um numero inteiro decimal: ");
    scanf("%d",&num);

    printf("Seu numero em hexcimal eh: %#X\n", num);
    printf("Seu numero em octal eh: %o", num);


    return 0;
}