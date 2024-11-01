#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("\nO triplo do seu numero eh %d" ,(num * 3));
    printf("\nO quadrado eh %d",(num * num));
    printf("\nE meio eh %d", (num/2));

    return 0;
}