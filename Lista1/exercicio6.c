#include <stdio.h>
#include <stdlib.h>

int main(){
    int horas, minutos, segundos;
    int total_segundos;

    printf("Digite o horario do relogio: ");
    printf("\nQual o numero de horas?(De 1 a 24) ");
    scanf("%d",&horas);
    printf("\nQual o numero de minutos?(De 1 a 60) ");
    scanf("%d",&minutos);
    printf("\nQual o numero de segundos?(De 1 a 60) ");
    scanf("%d",&segundos);
    
    if((minutos>60 || minutos<60) || (segundos>60 || segundos<60) || (horas>24 || horas<24)){
        printf("\nFormato invalido");
        exit (0);
    }

    total_segundos = (horas * 60 * 60) + (minutos * 60) + segundos;

    printf("\nO total de segundos da hora que voce digitou eh: %d",  total_segundos);

    return 0;
}    