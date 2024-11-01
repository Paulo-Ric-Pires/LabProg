#include <stdio.h>

int main(){
    int centena, dezena, unidade, num, num_invertido;

    puts("Digite um numero de 3 digitos: ");
    scanf("%d",&num);

    centena = num / 100;
    dezena = (num / 10) - (centena * 10);
    unidade = num % 10;

    num_invertido = unidade * 100 + dezena * 10 + centena; 

    printf("O numero que voce digitou invertido eh: %d", num_invertido);

    return 0;
}    