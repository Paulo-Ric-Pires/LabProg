#include <stdio.h>

int main(){
    float valor_hora, percentual_inss, salario_bruto, salario_liquido;
    int horas_trabalhadas;

    printf("Qual o valor da hora aula do professor? ");
    scanf("%f",&valor_hora);
    printf("\nQual o numero de horas trabalhadas do professor no mes? ");
    scanf("%d", &horas_trabalhadas);

    salario_bruto = valor_hora * horas_trabalhadas;

    //Baseado na tabela de descontos do INSS de 2024

    if(salario_bruto <= 1412){
        salario_liquido = salario_bruto - (salario_bruto * 0.075);
        printf("\nO valor a ser pago ao professor eh de: %.2f", salario_liquido);
    }else if(salario_bruto <= 2666.68){
        salario_liquido = salario_bruto - (salario_bruto * 0.09);
        printf("\nO valor a ser pago ao professor eh de: %.2f", salario_liquido);
    }else if(salario_bruto <= 4000.03){
        salario_liquido = salario_bruto - (salario_bruto * 0.12);
        printf("\nO valor a ser pago ao professor eh de: %.2f", salario_liquido);
    }else if(salario_bruto <= 7786.02){
        salario_liquido = salario_bruto - (salario_bruto * 0.14);
        printf("\nO valor a ser pago ao professor eh de: %.2f", salario_liquido);
    }else{
        printf("\nValores invalidos.");
    }
    
    return 0;
}    