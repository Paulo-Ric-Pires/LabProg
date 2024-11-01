#include <stdio.h>

int main(){
    float altura, largura, comprimento, volume;

    printf("Digite as medidas da caixa retangular: ");
    printf("\nAltura: ");
    scanf("%f",&altura);
    printf("\nLargura: ");
    scanf("%f",&largura);
    printf("\nComprimento: ");
    scanf("%f",&comprimento);

    volume = altura * largura * comprimento;

    printf("\nO volume da sua caixa eh: %.2f",volume);

    return 0;
}    