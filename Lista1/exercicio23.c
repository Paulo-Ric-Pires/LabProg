#include <stdio.h>

int main(){
    int x,n,y;

    puts("Digite um numero inteiro para x: ");
    scanf("%d",&x);
    puts("Digite um numero inteiro para o expoente(n) de 2: ");
    scanf("%d",&n);

    printf("X x 2 elevado a n eh igual a: %d.",(x<<n));

    return 0;
}