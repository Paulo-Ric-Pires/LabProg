#include <stdio.h>

int main(){
    int a, b, multiplo;

    printf("Digite dois inteiros ");
    printf("\nPrimeiro inteiro: ");
    scanf("%d",&a);
    printf("\nSegundo inteiro: ");
    scanf("%d",&b);
    
    (a % b)?puts("O primeiro nao eh multiplo do segundo."):puts("O primeiro eh multiplo do segundo.");

    
    return 0;
}