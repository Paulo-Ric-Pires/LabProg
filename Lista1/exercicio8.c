#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero inteiro ");
    scanf("%d",&num);

    printf("\nO sucessor do numero que voce digitou eh: %d",(num + 1));
    printf("\nO antecessor do numero que voce digitou eh: %d",(num - 1));


    return 0;
}    