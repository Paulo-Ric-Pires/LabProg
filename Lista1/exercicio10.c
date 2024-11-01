#include <stdio.h>

int main(){
    float reais, dolar;

    printf("Qual o valor da cotacao do dolar?\n");
    scanf("%f",dolar);
    printf("Quantos reais deseja converter para dolar?\n");
    scanf("%f",&reais);

    printf("\nA valor em dolar da quantidade de reais digitada eh: %.2f", (reais * dolar));

    return 0;
}    