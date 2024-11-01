#include <stdio.h>

int main(){
    float celsius, fahrenheit;

    printf("Digite o valor da tempertura em Celsius\n");
    scanf("%f",&celsius);

    fahrenheit = ((9 * celsius) + 160) / 5;

    printf("\nA temperatura em Fahrenheit eh: %.2f", fahrenheit);
    
    return 0;
}    