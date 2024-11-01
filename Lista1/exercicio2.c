#include <stdio.h>

int main(){
    float num;

    printf("Digite um numero real: \n");
    scanf("%f",&num);

    printf("Seu numero real com apenas uma casa decimal eh: %.1f" , num);   

    return 0;
}