#include <stdio.h>

int main(){
    int dias_trabalhados;
    float valor,salario_total;

    printf("Quantos dias o vendedor trabalhou? ");
    scanf("%d", &dias_trabalhados);

    valor = (50.25 * dias_trabalhados) - ((50.25 * dias_trabalhados) * 0.1);

    if(dias_trabalhados > 0 && dias_trabalhados <= 10){
        salario_total = valor;
        printf("\nO vendedor deverá receber %.2f", salario_total);
    }else if(dias_trabalhados <= 20){
        salario_total = valor + (valor * 0.2);
        printf("\nO vendedor deverá receber %.2f", salario_total);
    }else if(dias_trabalhados > 20){
        salario_total = valor + (valor * 0.3);
        printf("\nO vendedor deverá receber %.2f", salario_total);
    }else{
        printf("\nO vendedor nao trabalhou nenhum dia.");
    }

    return 0;
}    