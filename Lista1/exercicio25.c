#include <stdio.h>
#include <math.h>

int main(){
    float x1,y1;
    float x2,y2;
    float distancia;

    puts("Digite o valor de x1 e y1: ");
    puts("x1: ");
    scanf("%f",&x1);
    puts("y1: ");
    scanf("%f",&y1);
    puts("Digite o valor de x2 e y2: ");
    puts("x2: ");
    scanf("%f",&x2);
    puts("y2: ");
    scanf("%f",&y2);

    distancia = sqrt((pow((x2-x1),2)) + (pow((y2-y1),2)));

    printf("A distancia entre os pontos eh: %.2f", distancia);
    
    return 0;
}