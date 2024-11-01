#include <stdio.h>

int main(){
    int num1,num2;

    printf("Digite dois numeros inteiro");
    printf("\nPrimeiro numero: ");
    scanf("%d",&num1);
    printf("\nSegundo numero: ");
    scanf("%d",&num2);

    printf("\nA soma dos dois numero eh: %d",(num1 + num2));
    printf("\nA diferenca eh: %d",(num1 - num2));
    printf("\nO produto eh: %d",(num1 * num2));
    printf("\nO quociente eh: %d",(num1/num2));
    printf("\nO resto da divisao eh: %d",(num1 % num2));
    
    return 0;
}    