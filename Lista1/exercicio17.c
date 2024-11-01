#include <stdio.h>

int main(){
    float raio, pi = 3.14159;

    printf("Digite o tamanho do raio do circulo: ");
    scanf("%f",&raio);

    printf("\nO diametro eh: %f", (raio * 2));
    printf("\nO valor da circunferencia eh: %f", (2 * pi *raio));
    printf("\nO valor da area do circulo eh: %f", (pi * raio * raio));

    return 0;
}