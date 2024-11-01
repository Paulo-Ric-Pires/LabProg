#include <stdio.h>

int main(){
    float conta;

    printf("Qual o valor da conta? ");
    scanf("%f",&conta);

    printf("O total a ser pago eh : %.2f", (conta + (0.1 *conta )));
    
    return 0;
}